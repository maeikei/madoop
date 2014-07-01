<?php
/**
 * Application level Controller
 *
 * This file is application-wide controller file. You can put all
 * application-wide controller-related methods here.
 *
 * CakePHP(tm) : Rapid Development Framework (http://cakephp.org)
 * Copyright (c) Cake Software Foundation, Inc. (http://cakefoundation.org)
 *
 * Licensed under The MIT License
 * For full copyright and license information, please see the LICENSE.txt
 * Redistributions of files must retain the above copyright notice.
 *
 * @copyright     Copyright (c) Cake Software Foundation, Inc. (http://cakefoundation.org)
 * @link          http://cakephp.org CakePHP(tm) Project
 * @package       app.Controller
 * @since         CakePHP(tm) v 0.2.9
 * @license       http://www.opensource.org/licenses/mit-license.php MIT License
 */

App::uses('AppController', 'Controller');

/**
 * Application Controller
 *
 * Add your application-wide methods in the class below, your controllers
 * will inherit them.
 *
 * @package		app.Controller
 * @link		http://book.cakephp.org/2.0/en/controllers.html#the-app-controller
 */
class CephWebDeployController extends AppController {

    //CakeのJsonViewとXmlViewを使用するので、RequestHandler必須。
    public $components = array('Session', 'RequestHandler');


	protected $result = array();
	
	public function beforeFilter() {
        parent::beforeFilter();
 
 
        //meta情報とかを返すといいですね。とりあえずいまアクセスしているurlとhttp methodでも含めておきましょう
        $this->result['meta'] = array(
            'url' => $this->request->here,
            'method' => $this->request->method(),
        );
 
        // nosniffつけるべし。じゃないとIEでXSS起きる可能性あり。
        $this->response->header('X-Content-Type-Options', 'nosniff');
    }
 
    public function beforeRender() {
        // jsonp対応。JsonpViewクラスを自作(後述)
        if ($this->viewClass === 'Json' && isset($this->request->query['callback'])) {
            $this->viewClass = 'Jsonp';
        }
    }	

    // 成功系処理。$this->resultに値いれる
    protected function success($response = array()) {
        $this->result['response'] = $response;

        $this->set('meta', $this->result['meta']);
        $this->set('response', $this->result['response']);
        $this->set('_serialize', array('meta', 'response'));
    }

	
	// エラー系処理。$this->resultに値いれる
    protected function error($message = '', $code) {
        $this->result['error']['message'] = $message;
        $this->result['error']['code'] = $code;

        //ちゃんと400ステータスコードにするの大事。後述
        $this->response->statusCode(400);
        $this->set('meta', $this->result['meta']);
        $this->set('error', $this->result['error']);
        $this->set('_serialize', array('meta', 'error'));
    }

    // バリデーションエラー系処理。$this->resultに値いれる
    protected function validationError($modelName, $validationError = array()) {
        $this->result['error']['message'] = 'Validation Error';
        $this->result['error']['code'] = '422'; //エラーコードはプロジェクトごとに定義すべし
        $this->result['error']['validation'][$modelName] = array();
        foreach ($validationError as $key => $value) {
            $this->result['error']['validation'][$modelName][$key] = $value[0];
        }

        //ちゃんと400ステータスコードにするの大事。後述
        $this->response->statusCode(400);
        $this->set('meta', $this->result['meta']);
        $this->set('error', $this->result['error']);
        $this->set('_serialize', array('meta', 'error'));
    }
    
    
    
	public function index() {
	}
	
	public function hosts() {
		$hosts = `cat /etc/hosts`;
		return $this->success(array('hosts' => explode("\n",$hosts)));
	}

	public function conf() {
		$confs = `cat /etc/ceph/ceph.conf`;
		return $this->success(array('ceph.conf' => explode("\n",$confs)));
	}
}


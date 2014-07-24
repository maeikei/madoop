<?php 
class AppSchema extends CakeSchema {

	public function before($event = array()) {
		return true;
	}

	public function after($event = array()) {
	}




	var $hoge = array(
		'id' => array(
			'type' => 'integer', 
			'null' => false, 
			'default' => null, 
			'key' => 'primary', 
			'extra' => 'auto_increment', 
			'length' => 10, 
		),
		'created' => array(
			'type' => 'timestamp', 
			'null' => false, 
			'default' => null, 
		),
		'modified' => array(
			'type' => 'timestamp', 
			'null' => false, 
			'default' => null, 
		),

		'name' => array(
			'type' => 'string', 
			'null' => false, 
			'default' => null, 
			'length' => 255, 
		),
		'content' => array(
			'type' => 'text', 
			'null' => false, 
			'default' => null, 
		),
		
		'indexes' => array(
			'PRIMARY' => array(
				'column' => 'id', 
				'unique' => 1, 
			),
			'hoge_name_idx' => array(
				'unique' => true, 
				'column' => array('id', 'name')
			)
		)
	);

}

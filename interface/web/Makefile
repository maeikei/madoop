
.PHONY : all config apache2 mount  nginx

all: mount apache2 nginx

reload: apache2 nginx

mount:
	mkdir -p ./madoop/app/tmp/
	sudo mount tmpfs ./madoop/app/tmp/ -t tmpfs -o size=32m
	sudo chown www-data -R ./madoop/app/tmp/
	

config:
		sudo cp -rf ./etc/* /etc/
		cd /etc/apache2/sites-enabled && \
		sudo ln -sf ../sites-available/001-default.conf 001-default.conf

apache2:config
	sudo a2enmod rewrite 
	sudo service apache2 restart
	sudo apt-get install php5-cli

nginx:config
	sudo service nginx reload
	
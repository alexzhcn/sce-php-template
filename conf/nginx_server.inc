location ~ \.php$ {
          root           /opt/src/app;
          fastcgi_pass   127.0.0.1:9000;
          fastcgi_index  index.php;
          fastcgi_param SCRIPT_FILENAME /opt/src/app/$fastcgi_script_name;
	  include        /opt/apps/nginx/conf/fastcgi_params;
}

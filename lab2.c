# to edit in VSCode use:
# sudo chown ubuntu nginx.conf
# sudo chmod 700 nginx.conf

# sudo systemctl status nginx
# sudo service nginx restart (after a change)
# sudo nginx -t (test config file syntax)

events {} 

http {
	server { 
		listen 80;
		location /hello { 
			return 200 "Hello World"; 
		} 
	} 
}

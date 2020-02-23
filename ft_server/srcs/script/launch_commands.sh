/etc/init.d/mysql start
/etc/init.d/php7.3-fpm start
mariadb < /var/www/localhost/phpmyadmin/sql/create_tables.sql
mysql -e "GRANT SELECT, INSERT, UPDATE, DELETE ON phpmyadmin.* TO 'pma'@'localhost' IDENTIFIED BY 'hello'"
mysql -e "GRANT ALL PRIVILEGES ON *.* TO 'curtis'@'localhost' IDENTIFIED BY 'hello' WITH GRANT OPTION"
mysql -e "FLUSH PRIVILEGES"
service nginx start

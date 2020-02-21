/etc/init.d/mysql start
/etc/init.d/php7.3-fpm start
mariadb < /usr/share/phpmyadmin/sql/create_tables.sql
mysql -e "GRANT SELECT, INSERT, UPDATE, DELETE ON phpmyadmin.* TO 'pma'@'localhost' IDENTIFIED BY 'hello'"
service nginx start

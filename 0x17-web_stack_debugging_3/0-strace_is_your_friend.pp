# fixing apachea error within returning 500 error

exec {'replace':
  provider => shell,
  command  => 'sed -i "s/phpp/php/g" /var/www/html/wp-settings.php'
}

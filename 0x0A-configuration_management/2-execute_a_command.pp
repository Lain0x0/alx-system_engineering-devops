# kill killmenow

exec {'pkill killmenow':
  path     => '/usr/bin':
  command  => 'pkill killmenow',
  provider => shell,

}

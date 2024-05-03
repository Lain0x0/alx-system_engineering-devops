# creating a file in /tmp directory giving those requirements [path, permession, owner, group]
# also this puppet file contain 'I love Puppet as content'

file { '/tmp/school':
    ensure  => 'directory',
    mode    => '0744',
    owner   => 'www-data',
    group   => 'www-data',
    content => 'I love Puppet',
}


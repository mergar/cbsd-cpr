# custom defines
#
arch=`uname -m`

# pkg create docroot
_DOCROOT="/nfs/web/dl.bsdstore.ru/releases"
[ ! -d "${_DOCROOT}" ] && mkdir -p ${_DOCROOT}

_IMGDOCROOT="/nfs/web/dl.bsdstore.ru/img"
[ ! -d "${_IMGDOCROOT}" ] && mkdir -p ${_IMGDOCROOT}

# base create docroot
_DOCROOTBASE="/nfs/web/dl.bsdstore.ru/releases"
[ ! -d "${_DOCROOTBASE}" ] && mkdir -p ${_DOCROOTBASE}

# base create docroot
_IMGDOCROOTBASE="/nfs/web/dl.bsdstore.ru/img"
[ ! -d "${_IMGDOCROOTBASE}" ] && mkdir -p ${_IMGDOCROOTBASE}

# pkg cpr docroot
_DOCROOTPKGBASE="/nfs/web/dl.bsdstore.ru/freebsd"
[ ! -d "${_DOCROOTPKGBASE}" ] && mkdir -p ${_DOCROOTPKGBASE}

# default is nox repository
_MASTERLINK="nox"
_SLAVELINK=""

# default is continue mode
_NEW="0"

_REPOVERION="${_MASTERLINK}"

# pause by default
_PAUSE="0"

# hosts for populate
_HST="hst1 hst2"

# BATCH by default
_BATCH="1"

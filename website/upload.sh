#!/bin/sh

RSYNC_RSH=ssh rsync -zvP *.html *.png *.css symbiont@shell.berlios.de:/home/groups/konqlets/htdocs/

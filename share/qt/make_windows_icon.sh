#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/phantomx.ico

convert ../../src/qt/res/icons/phantomx-16.png ../../src/qt/res/icons/phantomx-80.png ${ICON_DST}

Route110_TrickHouseEnd_MapBorder:: @ 82EE174
	.incbin "data/layouts/Route110_TrickHouseEnd/border.bin"

Route110_TrickHouseEnd_MapBlockdata:: @ 82EE17C
	.incbin "data/layouts/Route110_TrickHouseEnd/map.bin"

	.align 2
Route110_TrickHouseEnd_Layout:: @ 82EE23C
	.4byte 0xc
	.4byte 0x8
	.4byte Route110_TrickHouseEnd_MapBorder
	.4byte Route110_TrickHouseEnd_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

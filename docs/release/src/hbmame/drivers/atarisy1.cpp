// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/atarisy1.cpp"



ROM_START( ataris1hw )
	ROM_REGION( 0x88000, "maincpu", 0 )
	MOTHERBOARD_BIOS
	ROM_LOAD16_BYTE( "ataris1hw.432",   0x10000, 0x08000, CRC(db3f1d4e) SHA1(58d6a88f73f90c8fe2981e60fbf6f359e0b88ea7) )
	ROM_LOAD16_BYTE( "ataris1hw.431",   0x10001, 0x08000, CRC(e439e2a1) SHA1(4346252c81336c087edfbd2e334d488f13dcaba3) )

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "136036.153",   0x4000, 0x4000, CRC(95294641) SHA1(00f90a0d49d2c77d5288080036f81a74ad31f8bc) )
	ROM_LOAD( "136036.154",   0x8000, 0x4000, CRC(cbfc6adb) SHA1(ee132eced924435f1214e2997533e866a3e5364b) )
	ROM_LOAD( "136036.155",   0xc000, 0x4000, CRC(fd1a6878) SHA1(28e1b2187f58098e5140d9a88bda969965758f26) )

	ROM_REGION( 0x2000, "alpha", 0 )
	MOTHERBOARD_ALPHA

	ROM_REGION( 0x200000, "tiles", ROMREGION_INVERT | ROMREGION_ERASEFF )
	ROM_LOAD( "136036.135",   0x000000, 0x08000, CRC(a8fa9870) SHA1(375cb16ccaae62cf429bf1a7d2c6de1829b86877) )
	ROM_LOAD( "136036.139",   0x010000, 0x08000, CRC(6959604d) SHA1(94f130507981ec01240252ab7b044f6d1e19280e) )
	ROM_LOAD( "136036.143",   0x020000, 0x08000, CRC(b6b14274) SHA1(441c0447721afe0aadf320e1b0c40ebf97d0e485) )
	ROM_LOAD( "136036.147",   0x030000, 0x08000, CRC(2de2e834) SHA1(ba7640ea7440250152b1be71e65e3480f782011f) )

	ROM_REGION( 0x400, "proms", 0 )
	ROM_LOAD( "136036.152",   0x000, 0x200, CRC(4f96e57c) SHA1(271633a0aacd1d1efe2917728b73e90010c64d2c) )
	ROM_LOAD( "136036.151",   0x200, 0x200, CRC(7daf351f) SHA1(95c13d81a47440f847af7b19632cc032380b9ff4) )

	ROM_REGION( 0x201, "motherbrd_proms", 0)
	MOTHERBOARD_PROMS
ROM_END



// It runs, the output appears in the videoram (A03xxx), but screen stays black. Works on real hardware.

ROM_START( ataris1rt )
	ROM_REGION( 0x88000, "maincpu", 0 )
	ROM_LOAD16_BYTE("ataris1rt.l13", 0x00000, 0x04000, CRC(86713619) SHA1(26e0348e91d10d9c7380736194bb8cb933765293) )
	ROM_LOAD16_BYTE("ataris1rt.l12", 0x00001, 0x04000, CRC(63b94bd5) SHA1(fe3c41a33cd8e70d04744055488d8e94d4a70caf) )

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "136036.153",   0x4000, 0x4000, CRC(95294641) SHA1(00f90a0d49d2c77d5288080036f81a74ad31f8bc) )
	ROM_LOAD( "136036.154",   0x8000, 0x4000, CRC(cbfc6adb) SHA1(ee132eced924435f1214e2997533e866a3e5364b) )
	ROM_LOAD( "136036.155",   0xc000, 0x4000, CRC(fd1a6878) SHA1(28e1b2187f58098e5140d9a88bda969965758f26) )

	ROM_REGION( 0x2000, "alpha", 0 )
	MOTHERBOARD_ALPHA

	ROM_REGION( 0x200000, "tiles", ROMREGION_INVERT | ROMREGION_ERASEFF )
	ROM_LOAD( "136036.135",   0x000000, 0x08000, CRC(a8fa9870) SHA1(375cb16ccaae62cf429bf1a7d2c6de1829b86877) )
	ROM_LOAD( "136036.139",   0x010000, 0x08000, CRC(6959604d) SHA1(94f130507981ec01240252ab7b044f6d1e19280e) )
	ROM_LOAD( "136036.143",   0x020000, 0x08000, CRC(b6b14274) SHA1(441c0447721afe0aadf320e1b0c40ebf97d0e485) )
	ROM_LOAD( "136036.147",   0x030000, 0x08000, CRC(2de2e834) SHA1(ba7640ea7440250152b1be71e65e3480f782011f) )

	ROM_REGION( 0x400, "proms", 0 )
	ROM_LOAD( "136036.152",   0x000, 0x200, CRC(4f96e57c) SHA1(271633a0aacd1d1efe2917728b73e90010c64d2c) )
	ROM_LOAD( "136036.151",   0x200, 0x200, CRC(7daf351f) SHA1(95c13d81a47440f847af7b19632cc032380b9ff4) )

	ROM_REGION( 0x201, "motherbrd_proms", 0)
	MOTHERBOARD_PROMS
ROM_END



GAME( 2017, ataris1hw, indytemp, indytemp, indytemp, atarisy1_state, indytemp, ROT0, "Luigi30", "Atari System 1 Hello World", 0 )
GAME( 2017, ataris1rt, indytemp, indytemp, indytemp, atarisy1_state, indytemp, ROT0, "GadgetFreak", "Atari System 1 Ram Tester", MACHINE_NOT_WORKING )

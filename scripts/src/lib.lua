-- license:BSD-3-Clause
-- copyright-holders:MAMEdev Team

---------------------------------------------------------------------------
--
--   lib.lua
--
--   Rules for building lib cores
--
---------------------------------------------------------------------------

project "utils"
	uuid "22489ad0-4cb2-4d91-ad81-24b0d80ca30a"
	kind (LIBTYPE)

	addprojectflags()

	includedirs {
		MAME_DIR .. "src/osd",
		MAME_DIR .. "src/lib/util",
		MAME_DIR .. "3rdparty",
		ext_includedir("expat"),
		ext_includedir("zlib"),
		ext_includedir("flac"),
	}

	files {
		MAME_DIR .. "src/lib/util/bitstream.h",
		MAME_DIR .. "src/lib/util/coretmpl.h",
		MAME_DIR .. "src/lib/util/avhuff.cpp",
		MAME_DIR .. "src/lib/util/avhuff.h",
		MAME_DIR .. "src/lib/util/aviio.cpp",
		MAME_DIR .. "src/lib/util/aviio.h",
		MAME_DIR .. "src/lib/util/bitmap.cpp",
		MAME_DIR .. "src/lib/util/bitmap.h",
		MAME_DIR .. "src/lib/util/cdrom.cpp",
		MAME_DIR .. "src/lib/util/cdrom.h",
		MAME_DIR .. "src/lib/util/chd.cpp",
		MAME_DIR .. "src/lib/util/chd.h",
		MAME_DIR .. "src/lib/util/chdcd.cpp",
		MAME_DIR .. "src/lib/util/chdcd.h",
		MAME_DIR .. "src/lib/util/chdcodec.cpp",
		MAME_DIR .. "src/lib/util/chdcodec.h",
		MAME_DIR .. "src/lib/util/corealloc.h",
		MAME_DIR .. "src/lib/util/corefile.cpp",
		MAME_DIR .. "src/lib/util/corefile.h",
		MAME_DIR .. "src/lib/util/corestr.cpp",
		MAME_DIR .. "src/lib/util/corestr.h",
		MAME_DIR .. "src/lib/util/coreutil.cpp",
		MAME_DIR .. "src/lib/util/coreutil.h",
		MAME_DIR .. "src/lib/util/delegate.cpp",
		MAME_DIR .. "src/lib/util/delegate.h",
		MAME_DIR .. "src/lib/util/flac.cpp",
		MAME_DIR .. "src/lib/util/flac.h",
		MAME_DIR .. "src/lib/util/harddisk.cpp",
		MAME_DIR .. "src/lib/util/harddisk.h",
		MAME_DIR .. "src/lib/util/hash.cpp",
		MAME_DIR .. "src/lib/util/hash.h",
		MAME_DIR .. "src/lib/util/hashing.cpp",
		MAME_DIR .. "src/lib/util/hashing.h",
		MAME_DIR .. "src/lib/util/huffman.cpp",
		MAME_DIR .. "src/lib/util/huffman.h",
		MAME_DIR .. "src/lib/util/jedparse.cpp",
		MAME_DIR .. "src/lib/util/jedparse.h",
		MAME_DIR .. "src/lib/util/md5.cpp",
		MAME_DIR .. "src/lib/util/md5.h",
		MAME_DIR .. "src/lib/util/nanosvg.cpp",
		MAME_DIR .. "src/lib/util/opresolv.cpp",
		MAME_DIR .. "src/lib/util/opresolv.h",
		MAME_DIR .. "src/lib/util/options.cpp",
		MAME_DIR .. "src/lib/util/options.h",
		MAME_DIR .. "src/lib/util/palette.cpp",
		MAME_DIR .. "src/lib/util/palette.h",
		MAME_DIR .. "src/lib/util/plaparse.cpp",
		MAME_DIR .. "src/lib/util/plaparse.h",
		MAME_DIR .. "src/lib/util/png.cpp",
		MAME_DIR .. "src/lib/util/png.h",
		MAME_DIR .. "src/lib/util/pool.cpp",
		MAME_DIR .. "src/lib/util/pool.h",
		MAME_DIR .. "src/lib/util/sha1.cpp",
		MAME_DIR .. "src/lib/util/sha1.h",
		MAME_DIR .. "src/lib/util/strformat.h",
		MAME_DIR .. "src/lib/util/timeconv.cpp",
		MAME_DIR .. "src/lib/util/timeconv.h",
		MAME_DIR .. "src/lib/util/unicode.cpp",
		MAME_DIR .. "src/lib/util/unicode.h",
		MAME_DIR .. "src/lib/util/unzip.cpp",
		MAME_DIR .. "src/lib/util/unzip.h",
		MAME_DIR .. "src/lib/util/un7z.cpp",
		MAME_DIR .. "src/lib/util/un7z.h",
		MAME_DIR .. "src/lib/util/vbiparse.cpp",
		MAME_DIR .. "src/lib/util/vbiparse.h",
		MAME_DIR .. "src/lib/util/vecstream.h",
		MAME_DIR .. "src/lib/util/wavwrite.cpp",
		MAME_DIR .. "src/lib/util/wavwrite.h",
		MAME_DIR .. "src/lib/util/xmlfile.cpp",
		MAME_DIR .. "src/lib/util/xmlfile.h",
		MAME_DIR .. "src/lib/util/zippath.cpp",
		MAME_DIR .. "src/lib/util/zippath.h",
	}

INCLUDES= $(all_includes)
METASOURCES = AUTO

kde_module_LTLIBRARIES=konqsidebar_konqlets.la

konqsidebar_konqlets_la_SOURCES = konqlets.cpp
konqsidebar_konqlets_la_LDFLAGS = -module $(KDE_PLUGIN) $(all_libraries) -lkonqsidebarplugin
konqsidebar_konqlets_la_LIBADD = $(LIB_KPARTS) $(LIB_KFILE)

konqlets_entry_DATA = konqlets.desktop
konqlets_entrydir = $(kde_datadir)/konqsidebartng/entries

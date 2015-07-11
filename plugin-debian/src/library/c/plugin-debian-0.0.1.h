/* plugin-debian-0.0.1.h generated by valac 0.28.0, the Vala compiler, do not modify */


#ifndef __SRC_LIBRARY_C_PLUGIN_DEBIAN_0_0_1_H__
#define __SRC_LIBRARY_C_PLUGIN_DEBIAN_0_0_1_H__

#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <glib-object.h>
#include <bob-0.0.1.h>

G_BEGIN_DECLS


#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_ARCHITECTURE_ENUM (bob_builder_build_plugin_control_control_file_architecture_enum_get_type ())

#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_SECTION_ENUM (bob_builder_build_plugin_control_control_file_section_enum_get_type ())

#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_BUILDER (bob_builder_build_plugin_control_control_file_builder_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_BUILDER, bobbuilderbuildplugincontrolControlFileBuilder))
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_BUILDER, bobbuilderbuildplugincontrolControlFileBuilderClass))
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_IS_CONTROL_FILE_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_BUILDER))
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_IS_CONTROL_FILE_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_BUILDER))
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_BUILDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_BUILDER, bobbuilderbuildplugincontrolControlFileBuilderClass))

typedef struct _bobbuilderbuildplugincontrolControlFileBuilder bobbuilderbuildplugincontrolControlFileBuilder;
typedef struct _bobbuilderbuildplugincontrolControlFileBuilderClass bobbuilderbuildplugincontrolControlFileBuilderClass;
typedef struct _bobbuilderbuildplugincontrolControlFileBuilderPrivate bobbuilderbuildplugincontrolControlFileBuilderPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_PROPERTIES (bob_builder_build_plugin_control_control_file_properties_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_PROPERTIES, bobbuilderbuildplugincontrolControlFileProperties))
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_PROPERTIES, bobbuilderbuildplugincontrolControlFilePropertiesClass))
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_IS_CONTROL_FILE_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_PROPERTIES))
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_IS_CONTROL_FILE_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_PROPERTIES))
#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_PROPERTIES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_PROPERTIES, bobbuilderbuildplugincontrolControlFilePropertiesClass))

typedef struct _bobbuilderbuildplugincontrolControlFileProperties bobbuilderbuildplugincontrolControlFileProperties;
typedef struct _bobbuilderbuildplugincontrolControlFilePropertiesClass bobbuilderbuildplugincontrolControlFilePropertiesClass;
typedef struct _bobbuilderbuildplugincontrolControlFilePropertiesPrivate bobbuilderbuildplugincontrolControlFilePropertiesPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_CONTROL_TYPE_CONTROL_FILE_PRIORITY_ENUM (bob_builder_build_plugin_control_control_file_priority_enum_get_type ())

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE (bob_builder_build_plugin_temporary_debian_archive_directory_structure_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE, bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructure))
#define BOB_BUILDER_BUILD_PLUGIN_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE, bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructureClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE))
#define BOB_BUILDER_BUILD_PLUGIN_IS_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE))
#define BOB_BUILDER_BUILD_PLUGIN_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_TEMPORARY_DEBIAN_ARCHIVE_DIRECTORY_STRUCTURE, bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructureClass))

typedef struct _bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructure bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructure;
typedef struct _bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructureClass bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructureClass;
typedef struct _bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructurePrivate bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructurePrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_DEBIAN_PACKAGE_PLUGIN (bob_builder_build_plugin_build_debian_package_plugin_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_DEBIAN_PACKAGE_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_DEBIAN_PACKAGE_PLUGIN, bobbuilderbuildpluginBuildDebianPackagePlugin))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_DEBIAN_PACKAGE_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_DEBIAN_PACKAGE_PLUGIN, bobbuilderbuildpluginBuildDebianPackagePluginClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_DEBIAN_PACKAGE_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_DEBIAN_PACKAGE_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_DEBIAN_PACKAGE_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_DEBIAN_PACKAGE_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_DEBIAN_PACKAGE_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_DEBIAN_PACKAGE_PLUGIN, bobbuilderbuildpluginBuildDebianPackagePluginClass))

typedef struct _bobbuilderbuildpluginBuildDebianPackagePlugin bobbuilderbuildpluginBuildDebianPackagePlugin;
typedef struct _bobbuilderbuildpluginBuildDebianPackagePluginClass bobbuilderbuildpluginBuildDebianPackagePluginClass;
typedef struct _bobbuilderbuildpluginBuildDebianPackagePluginPrivate bobbuilderbuildpluginBuildDebianPackagePluginPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_WORKING_DIRECTORY_STRUCTURE (bob_builder_build_plugin_working_directory_structure_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_WORKING_DIRECTORY_STRUCTURE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_WORKING_DIRECTORY_STRUCTURE, bobbuilderbuildpluginWorkingDirectoryStructure))
#define BOB_BUILDER_BUILD_PLUGIN_WORKING_DIRECTORY_STRUCTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_WORKING_DIRECTORY_STRUCTURE, bobbuilderbuildpluginWorkingDirectoryStructureClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_WORKING_DIRECTORY_STRUCTURE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_WORKING_DIRECTORY_STRUCTURE))
#define BOB_BUILDER_BUILD_PLUGIN_IS_WORKING_DIRECTORY_STRUCTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_WORKING_DIRECTORY_STRUCTURE))
#define BOB_BUILDER_BUILD_PLUGIN_WORKING_DIRECTORY_STRUCTURE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_WORKING_DIRECTORY_STRUCTURE, bobbuilderbuildpluginWorkingDirectoryStructureClass))

typedef struct _bobbuilderbuildpluginWorkingDirectoryStructure bobbuilderbuildpluginWorkingDirectoryStructure;
typedef struct _bobbuilderbuildpluginWorkingDirectoryStructureClass bobbuilderbuildpluginWorkingDirectoryStructureClass;
typedef struct _bobbuilderbuildpluginWorkingDirectoryStructurePrivate bobbuilderbuildpluginWorkingDirectoryStructurePrivate;

#define BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_TYPE_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER (bob_builder_build_plugin_dependency_debian_package_depedency_resolver_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_TYPE_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER, bobbuilderbuildplugindependencyDebianPackageDepedencyResolver))
#define BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_TYPE_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER, bobbuilderbuildplugindependencyDebianPackageDepedencyResolverClass))
#define BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_IS_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_TYPE_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER))
#define BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_IS_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_TYPE_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER))
#define BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_TYPE_DEBIAN_PACKAGE_DEPEDENCY_RESOLVER, bobbuilderbuildplugindependencyDebianPackageDepedencyResolverClass))

typedef struct _bobbuilderbuildplugindependencyDebianPackageDepedencyResolver bobbuilderbuildplugindependencyDebianPackageDepedencyResolver;
typedef struct _bobbuilderbuildplugindependencyDebianPackageDepedencyResolverClass bobbuilderbuildplugindependencyDebianPackageDepedencyResolverClass;
typedef struct _bobbuilderbuildplugindependencyDebianPackageDepedencyResolverPrivate bobbuilderbuildplugindependencyDebianPackageDepedencyResolverPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_EXECUTABLE_RUNNER (bob_builder_build_plugin_execute_executable_runner_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_EXECUTABLE_RUNNER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_EXECUTABLE_RUNNER, bobbuilderbuildpluginexecuteExecutableRunner))
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_EXECUTABLE_RUNNER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_EXECUTABLE_RUNNER, bobbuilderbuildpluginexecuteExecutableRunnerClass))
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_IS_EXECUTABLE_RUNNER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_EXECUTABLE_RUNNER))
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_IS_EXECUTABLE_RUNNER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_EXECUTABLE_RUNNER))
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_EXECUTABLE_RUNNER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_EXECUTABLE_RUNNER, bobbuilderbuildpluginexecuteExecutableRunnerClass))

typedef struct _bobbuilderbuildpluginexecuteExecutableRunner bobbuilderbuildpluginexecuteExecutableRunner;
typedef struct _bobbuilderbuildpluginexecuteExecutableRunnerClass bobbuilderbuildpluginexecuteExecutableRunnerClass;
typedef struct _bobbuilderbuildpluginexecuteExecutableRunnerPrivate bobbuilderbuildpluginexecuteExecutableRunnerPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_WHICH_CHECKER (bob_builder_build_plugin_execute_which_checker_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_WHICH_CHECKER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_WHICH_CHECKER, bobbuilderbuildpluginexecuteWhichChecker))
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_WHICH_CHECKER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_WHICH_CHECKER, bobbuilderbuildpluginexecuteWhichCheckerClass))
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_IS_WHICH_CHECKER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_WHICH_CHECKER))
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_IS_WHICH_CHECKER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_WHICH_CHECKER))
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_WHICH_CHECKER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_EXECUTE_TYPE_WHICH_CHECKER, bobbuilderbuildpluginexecuteWhichCheckerClass))

typedef struct _bobbuilderbuildpluginexecuteWhichChecker bobbuilderbuildpluginexecuteWhichChecker;
typedef struct _bobbuilderbuildpluginexecuteWhichCheckerClass bobbuilderbuildpluginexecuteWhichCheckerClass;
typedef struct _bobbuilderbuildpluginexecuteWhichCheckerPrivate bobbuilderbuildpluginexecuteWhichCheckerPrivate;

typedef enum  {
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_ANY,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_ALL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_ALPHA,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_AMD64,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_ARM64,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_ARMEL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_ARMHF,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_HPPA,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_HURD_I386,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_I386,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_KFREEBSD_AMD64,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_KFREEBSD_I386,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_M68K,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_MIPS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_MIPSEL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_POWERPC,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_POWERPCSPE,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_PPC64,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_PPC64EL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_S390X,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_SH4,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_SPARC,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_SPARC64,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_ARCHITECTURE_ENUM_X32
} bobbuilderbuildplugincontrolControlFileArchitectureEnum;

typedef enum  {
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_UNKNOWN,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_ADMIN,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_CLI_MONO,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_COMM,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_DATABASE,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_DEBIAN_INSTALLER,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_DEBUG,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_DEVEL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_DOC,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_EDITORS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_ELECTRONICS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_EMBEDDED,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_FONTS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_GAMES,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_GNOME,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_GNU_R,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_GNUSTEP,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_GRAPHICS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_HAMRADIO,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_HASKELL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_HTTPD,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_INTERPRETERS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_JAVA,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_KDE,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_KERNEL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_LIBDEVEL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_LIBS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_LISP,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_LOCALIZATION,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_MAIL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_MATH,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_MISC,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_NET,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_NEWS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_OCAML,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_OLDLIBS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_OTHEROSFS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_PERL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_PHP,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_PYTHON,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_RUBY,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_SCIENCE,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_SHELLS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_SOUND,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_TEX,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_TEXT,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_TRANSLATIONS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_UTILS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_VCS,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_VIDEO,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_VIRTUAL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_WEB,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_X11,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_XFCE,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_SECTION_ENUM_ZOPE
} bobbuilderbuildplugincontrolControlFileSectionEnum;

struct _bobbuilderbuildplugincontrolControlFileBuilder {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildplugincontrolControlFileBuilderPrivate * priv;
};

struct _bobbuilderbuildplugincontrolControlFileBuilderClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildplugincontrolControlFileBuilder *self);
};

struct _bobbuilderbuildplugincontrolControlFileProperties {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildplugincontrolControlFilePropertiesPrivate * priv;
};

struct _bobbuilderbuildplugincontrolControlFilePropertiesClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildplugincontrolControlFileProperties *self);
};

typedef enum  {
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_PRIORITY_ENUM_OPTIONAL,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_PRIORITY_ENUM_REQUIRED,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_PRIORITY_ENUM_IMPORTANT,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_PRIORITY_ENUM_STANDARD,
	BOB_BUILDER_BUILD_PLUGIN_CONTROL_CONTROL_FILE_PRIORITY_ENUM_EXTRA
} bobbuilderbuildplugincontrolControlFilePriorityEnum;

struct _bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructure {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructurePrivate * priv;
};

struct _bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructureClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructure *self);
};

struct _bobbuilderbuildpluginBuildDebianPackagePlugin {
	bobbuilderbuildpluginAbstractBobBuildPlugin parent_instance;
	bobbuilderbuildpluginBuildDebianPackagePluginPrivate * priv;
};

struct _bobbuilderbuildpluginBuildDebianPackagePluginClass {
	bobbuilderbuildpluginAbstractBobBuildPluginClass parent_class;
};

struct _bobbuilderbuildpluginWorkingDirectoryStructure {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginWorkingDirectoryStructurePrivate * priv;
};

struct _bobbuilderbuildpluginWorkingDirectoryStructureClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginWorkingDirectoryStructure *self);
};

typedef enum  {
	BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_DEPENDENCY_RESOLVER_ERROR_INITIALIZATION_ERROR
} bobbuilderbuildplugindependencyDependencyResolverError;
#define BOB_BUILDER_BUILD_PLUGIN_DEPENDENCY_DEPENDENCY_RESOLVER_ERROR bob_builder_build_plugin_dependency_dependency_resolver_error_quark ()
struct _bobbuilderbuildplugindependencyDebianPackageDepedencyResolver {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildplugindependencyDebianPackageDepedencyResolverPrivate * priv;
};

struct _bobbuilderbuildplugindependencyDebianPackageDepedencyResolverClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildplugindependencyDebianPackageDepedencyResolver *self);
};

typedef enum  {
	BOB_BUILDER_BUILD_PLUGIN_EXECUTE_EXECUTABLE_RUNNER_ERROR_EXECUTABLE_ERROR
} bobbuilderbuildpluginexecuteExecutableRunnerError;
#define BOB_BUILDER_BUILD_PLUGIN_EXECUTE_EXECUTABLE_RUNNER_ERROR bob_builder_build_plugin_execute_executable_runner_error_quark ()
struct _bobbuilderbuildpluginexecuteExecutableRunner {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginexecuteExecutableRunnerPrivate * priv;
};

struct _bobbuilderbuildpluginexecuteExecutableRunnerClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginexecuteExecutableRunner *self);
};

struct _bobbuilderbuildpluginexecuteWhichChecker {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginexecuteWhichCheckerPrivate * priv;
};

struct _bobbuilderbuildpluginexecuteWhichCheckerClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginexecuteWhichChecker *self);
};


GType bob_builder_build_plugin_control_control_file_architecture_enum_get_type (void) G_GNUC_CONST;
gchar* bob_builder_build_plugin_control_control_file_architecture_enum_name (bobbuilderbuildplugincontrolControlFileArchitectureEnum self);
bobbuilderbuildplugincontrolControlFileArchitectureEnum* bob_builder_build_plugin_control_control_file_architecture_enum_fromName (const gchar* name);
GType bob_builder_build_plugin_control_control_file_section_enum_get_type (void) G_GNUC_CONST;
gchar* bob_builder_build_plugin_control_control_file_section_enum_name (bobbuilderbuildplugincontrolControlFileSectionEnum self);
bobbuilderbuildplugincontrolControlFileArchitectureEnum* bob_builder_build_plugin_control_control_file_section_enum_fromName (bobbuilderbuildplugincontrolControlFileSectionEnum self, const gchar* name);
gpointer bob_builder_build_plugin_control_control_file_builder_ref (gpointer instance);
void bob_builder_build_plugin_control_control_file_builder_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_control_param_spec_control_file_builder (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_control_value_set_control_file_builder (GValue* value, gpointer v_object);
void bob_builder_build_plugin_control_value_take_control_file_builder (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_control_value_get_control_file_builder (const GValue* value);
GType bob_builder_build_plugin_control_control_file_builder_get_type (void) G_GNUC_CONST;
bobbuilderbuildplugincontrolControlFileBuilder* bob_builder_build_plugin_control_control_file_builder_controlFile (void);
bobbuilderbuildplugincontrolControlFileBuilder* bob_builder_build_plugin_control_control_file_builder_package (bobbuilderbuildplugincontrolControlFileBuilder* self, const gchar* package);
bobbuilderbuildplugincontrolControlFileBuilder* bob_builder_build_plugin_control_control_file_builder_version (bobbuilderbuildplugincontrolControlFileBuilder* self, const gchar* version);
bobbuilderbuildplugincontrolControlFileBuilder* bob_builder_build_plugin_control_control_file_builder_section (bobbuilderbuildplugincontrolControlFileBuilder* self, const gchar* section);
bobbuilderbuildplugincontrolControlFileBuilder* bob_builder_build_plugin_control_control_file_builder_optionalPriority (bobbuilderbuildplugincontrolControlFileBuilder* self);
bobbuilderbuildplugincontrolControlFileBuilder* bob_builder_build_plugin_control_control_file_builder_architecture (bobbuilderbuildplugincontrolControlFileBuilder* self, const gchar* architecture);
bobbuilderbuildplugincontrolControlFileBuilder* bob_builder_build_plugin_control_control_file_builder_description (bobbuilderbuildplugincontrolControlFileBuilder* self, const gchar* description);
bobbuilderbuildplugincontrolControlFileBuilder* bob_builder_build_plugin_control_control_file_builder_depends (bobbuilderbuildplugincontrolControlFileBuilder* self, bobbuilderrecipeprojectBobBuildProjectDependency* dependency);
bobbuilderfilesystemFileObject* bob_builder_build_plugin_control_control_file_builder_build (bobbuilderbuildplugincontrolControlFileBuilder* self);
gpointer bob_builder_build_plugin_control_control_file_properties_ref (gpointer instance);
void bob_builder_build_plugin_control_control_file_properties_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_control_param_spec_control_file_properties (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_control_value_set_control_file_properties (GValue* value, gpointer v_object);
void bob_builder_build_plugin_control_value_take_control_file_properties (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_control_value_get_control_file_properties (const GValue* value);
GType bob_builder_build_plugin_control_control_file_properties_get_type (void) G_GNUC_CONST;
void bob_builder_build_plugin_control_control_file_properties_setPackage (bobbuilderbuildplugincontrolControlFileProperties* self, const gchar* package);
void bob_builder_build_plugin_control_control_file_properties_setVersion (bobbuilderbuildplugincontrolControlFileProperties* self, const gchar* version);
void bob_builder_build_plugin_control_control_file_properties_setSection (bobbuilderbuildplugincontrolControlFileProperties* self, const gchar* section);
GType bob_builder_build_plugin_control_control_file_priority_enum_get_type (void) G_GNUC_CONST;
void bob_builder_build_plugin_control_control_file_properties_setPriority (bobbuilderbuildplugincontrolControlFileProperties* self, bobbuilderbuildplugincontrolControlFilePriorityEnum priority);
void bob_builder_build_plugin_control_control_file_properties_setArchitecture (bobbuilderbuildplugincontrolControlFileProperties* self, bobbuilderbuildplugincontrolControlFileArchitectureEnum architecture);
void bob_builder_build_plugin_control_control_file_properties_setDescription (bobbuilderbuildplugincontrolControlFileProperties* self, const gchar* description);
bobbuilderbuildplugincontrolControlFileProperties* bob_builder_build_plugin_control_control_file_properties_new (void);
bobbuilderbuildplugincontrolControlFileProperties* bob_builder_build_plugin_control_control_file_properties_construct (GType object_type);
gchar* bob_builder_build_plugin_control_control_file_priority_enum_name (bobbuilderbuildplugincontrolControlFilePriorityEnum self);
bobbuilderbuildplugincontrolControlFilePriorityEnum* bob_builder_build_plugin_control_control_file_priority_enum_fromName (bobbuilderbuildplugincontrolControlFilePriorityEnum self, const gchar* name);
void initializePlugin (bobbuilderbuildpluginBobBuildPluginLoader* pluginLoader);
gchar** getDependencies (int* result_length1);
gpointer bob_builder_build_plugin_temporary_debian_archive_directory_structure_ref (gpointer instance);
void bob_builder_build_plugin_temporary_debian_archive_directory_structure_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_temporary_debian_archive_directory_structure (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_temporary_debian_archive_directory_structure (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_temporary_debian_archive_directory_structure (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_temporary_debian_archive_directory_structure (const GValue* value);
GType bob_builder_build_plugin_temporary_debian_archive_directory_structure_get_type (void) G_GNUC_CONST;
void bob_builder_build_plugin_temporary_debian_archive_directory_structure_debianDirectory (const gchar* directoryName, bobbuilderfilesystemDirectoryBuilderDirectoryBuilderDelegate directoryDelegate, void* directoryDelegate_target);
bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructure* bob_builder_build_plugin_temporary_debian_archive_directory_structure_new (void);
bobbuilderbuildpluginTemporaryDebianArchiveDirectoryStructure* bob_builder_build_plugin_temporary_debian_archive_directory_structure_construct (GType object_type);
GType bob_builder_build_plugin_build_debian_package_plugin_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginBuildDebianPackagePlugin* bob_builder_build_plugin_build_debian_package_plugin_new (void);
bobbuilderbuildpluginBuildDebianPackagePlugin* bob_builder_build_plugin_build_debian_package_plugin_construct (GType object_type);
gpointer bob_builder_build_plugin_working_directory_structure_ref (gpointer instance);
void bob_builder_build_plugin_working_directory_structure_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_working_directory_structure (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_working_directory_structure (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_working_directory_structure (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_working_directory_structure (const GValue* value);
GType bob_builder_build_plugin_working_directory_structure_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginWorkingDirectoryStructure* bob_builder_build_plugin_working_directory_structure_target (bobbuilderfilesystemDirectoryBuilderDirectoryBuilderDelegate directoryDelegate, void* directoryDelegate_target);
bobbuilderbuildpluginWorkingDirectoryStructure* bob_builder_build_plugin_working_directory_structure_source (bobbuilderfilesystemDirectoryBuilderDirectoryBuilderDelegate directoryDelegate, void* directoryDelegate_target);
bobbuilderbuildpluginWorkingDirectoryStructure* bob_builder_build_plugin_working_directory_structure_new (void);
bobbuilderbuildpluginWorkingDirectoryStructure* bob_builder_build_plugin_working_directory_structure_construct (GType object_type);
GQuark bob_builder_build_plugin_dependency_dependency_resolver_error_quark (void);
gpointer bob_builder_build_plugin_dependency_debian_package_depedency_resolver_ref (gpointer instance);
void bob_builder_build_plugin_dependency_debian_package_depedency_resolver_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_dependency_param_spec_debian_package_depedency_resolver (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_dependency_value_set_debian_package_depedency_resolver (GValue* value, gpointer v_object);
void bob_builder_build_plugin_dependency_value_take_debian_package_depedency_resolver (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_dependency_value_get_debian_package_depedency_resolver (const GValue* value);
GType bob_builder_build_plugin_dependency_debian_package_depedency_resolver_get_type (void) G_GNUC_CONST;
void bob_builder_build_plugin_dependency_debian_package_depedency_resolver_initialize (bobbuilderbuildplugindependencyDebianPackageDepedencyResolver* self, GError** error);
gchar** bob_builder_build_plugin_dependency_debian_package_depedency_resolver_resolvePackages (bobbuilderbuildplugindependencyDebianPackageDepedencyResolver* self, bobbuilderrecipeprojectBobBuildProjectDependency* dependency, int* result_length1);
bobbuilderbuildplugindependencyDebianPackageDepedencyResolver* bob_builder_build_plugin_dependency_debian_package_depedency_resolver_new (void);
bobbuilderbuildplugindependencyDebianPackageDepedencyResolver* bob_builder_build_plugin_dependency_debian_package_depedency_resolver_construct (GType object_type);
GQuark bob_builder_build_plugin_execute_executable_runner_error_quark (void);
gpointer bob_builder_build_plugin_execute_executable_runner_ref (gpointer instance);
void bob_builder_build_plugin_execute_executable_runner_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_execute_param_spec_executable_runner (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_execute_value_set_executable_runner (GValue* value, gpointer v_object);
void bob_builder_build_plugin_execute_value_take_executable_runner (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_execute_value_get_executable_runner (const GValue* value);
GType bob_builder_build_plugin_execute_executable_runner_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginexecuteExecutableRunner* bob_builder_build_plugin_execute_executable_runner_new (const gchar* command);
bobbuilderbuildpluginexecuteExecutableRunner* bob_builder_build_plugin_execute_executable_runner_construct (GType object_type, const gchar* command);
gchar* bob_builder_build_plugin_execute_executable_runner_run (bobbuilderbuildpluginexecuteExecutableRunner* self, GError** error);
gpointer bob_builder_build_plugin_execute_which_checker_ref (gpointer instance);
void bob_builder_build_plugin_execute_which_checker_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_execute_param_spec_which_checker (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_execute_value_set_which_checker (GValue* value, gpointer v_object);
void bob_builder_build_plugin_execute_value_take_which_checker (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_execute_value_get_which_checker (const GValue* value);
GType bob_builder_build_plugin_execute_which_checker_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginexecuteWhichChecker* bob_builder_build_plugin_execute_which_checker_new (const gchar* commandToCheck);
bobbuilderbuildpluginexecuteWhichChecker* bob_builder_build_plugin_execute_which_checker_construct (GType object_type, const gchar* commandToCheck);
gboolean bob_builder_build_plugin_execute_which_checker_success (bobbuilderbuildpluginexecuteWhichChecker* self);


G_END_DECLS

#endif

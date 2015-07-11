/* plugin-debian-0.0.1.vapi generated by (null) 0.28.0, do not modify. */

namespace bob {
	namespace builder {
		namespace build {
			namespace plugin {
				namespace control {
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public class ControlFileBuilder {
						public bob.builder.build.plugin.control.ControlFileBuilder architecture (string architecture);
						public bob.builder.filesystem.FileObject build ();
						public static bob.builder.build.plugin.control.ControlFileBuilder controlFile ();
						public bob.builder.build.plugin.control.ControlFileBuilder depends (bob.builder.recipe.project.BobBuildProjectDependency dependency);
						public bob.builder.build.plugin.control.ControlFileBuilder description (string description);
						public bob.builder.build.plugin.control.ControlFileBuilder optionalPriority ();
						public bob.builder.build.plugin.control.ControlFileBuilder package (string package);
						public bob.builder.build.plugin.control.ControlFileBuilder section (string section);
						public bob.builder.build.plugin.control.ControlFileBuilder version (string version);
					}
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public class ControlFileProperties {
						public ControlFileProperties ();
						public void setArchitecture (bob.builder.build.plugin.control.ControlFileArchitectureEnum architecture);
						public void setDescription (string description);
						public void setPackage (string package);
						public void setPriority (bob.builder.build.plugin.control.ControlFilePriorityEnum priority);
						public void setSection (string section);
						public void setVersion (string version);
					}
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public enum ControlFileArchitectureEnum {
						ANY,
						ALL,
						ALPHA,
						AMD64,
						ARM64,
						ARMEL,
						ARMHF,
						HPPA,
						HURD_I386,
						I386,
						KFREEBSD_AMD64,
						KFREEBSD_I386,
						M68K,
						MIPS,
						MIPSEL,
						POWERPC,
						POWERPCSPE,
						PPC64,
						PPC64EL,
						S390X,
						SH4,
						SPARC,
						SPARC64,
						X32;
						public string name ();
						public static bob.builder.build.plugin.control.ControlFileArchitectureEnum? fromName (string? name);
					}
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public enum ControlFilePriorityEnum {
						OPTIONAL,
						REQUIRED,
						IMPORTANT,
						STANDARD,
						EXTRA;
						public string name ();
						public bob.builder.build.plugin.control.ControlFilePriorityEnum? fromName (string? name);
					}
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public enum ControlFileSectionEnum {
						UNKNOWN,
						ADMIN,
						CLI_MONO,
						COMM,
						DATABASE,
						DEBIAN_INSTALLER,
						DEBUG,
						DEVEL,
						DOC,
						EDITORS,
						ELECTRONICS,
						EMBEDDED,
						FONTS,
						GAMES,
						GNOME,
						GNU_R,
						GNUSTEP,
						GRAPHICS,
						HAMRADIO,
						HASKELL,
						HTTPD,
						INTERPRETERS,
						JAVA,
						KDE,
						KERNEL,
						LIBDEVEL,
						LIBS,
						LISP,
						LOCALIZATION,
						MAIL,
						MATH,
						MISC,
						NET,
						NEWS,
						OCAML,
						OLDLIBS,
						OTHEROSFS,
						PERL,
						PHP,
						PYTHON,
						RUBY,
						SCIENCE,
						SHELLS,
						SOUND,
						TEX,
						TEXT,
						TRANSLATIONS,
						UTILS,
						VCS,
						VIDEO,
						VIRTUAL,
						WEB,
						X11,
						XFCE,
						ZOPE;
						public string name ();
						public bob.builder.build.plugin.control.ControlFileArchitectureEnum? fromName (string? name);
					}
				}
				namespace dependency {
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public class DebianPackageDepedencyResolver {
						public DebianPackageDepedencyResolver ();
						public void initialize () throws bob.builder.build.plugin.dependency.DependencyResolverError;
						public string[] resolvePackages (bob.builder.recipe.project.BobBuildProjectDependency dependency);
					}
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public errordomain DependencyResolverError {
						INITIALIZATION_ERROR
					}
				}
				namespace execute {
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public class ExecutableRunner {
						public ExecutableRunner (string command);
						public string run () throws bob.builder.build.plugin.execute.ExecutableRunnerError;
					}
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public class WhichChecker {
						public WhichChecker (string commandToCheck);
						public bool success ();
					}
					[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
					public errordomain ExecutableRunnerError {
						EXECUTABLE_ERROR
					}
				}
				[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
				public class BuildDebianPackagePlugin : bob.builder.build.plugin.AbstractBobBuildPlugin {
					public BuildDebianPackagePlugin ();
					public override void initialize (bob.builder.recipe.plugin.BobBuildPluginRecipe pluginRecipe) throws bob.builder.build.plugin.BobBuildPluginError;
					public override void run (bob.builder.recipe.project.BobBuildProjectRecipe projectRecipe, bob.builder.filesystem.DirectoryObject projectDirectory) throws bob.builder.build.plugin.BobBuildPluginError;
				}
				[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
				public class TemporaryDebianArchiveDirectoryStructure {
					public TemporaryDebianArchiveDirectoryStructure ();
					public static void debianDirectory (string directoryName, bob.builder.filesystem.DirectoryBuilder.DirectoryBuilderDelegate directoryDelegate);
				}
				[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
				public class WorkingDirectoryStructure {
					public WorkingDirectoryStructure ();
					public static bob.builder.build.plugin.WorkingDirectoryStructure source (bob.builder.filesystem.DirectoryBuilder.DirectoryBuilderDelegate directoryDelegate);
					public static bob.builder.build.plugin.WorkingDirectoryStructure target (bob.builder.filesystem.DirectoryBuilder.DirectoryBuilderDelegate directoryDelegate);
				}
			}
		}
	}
}
[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
public static void initializePlugin (bob.builder.build.plugin.BobBuildPluginLoader pluginLoader);
[CCode (cheader_filename = "plugin-debian-0.0.1.h")]
public static string[] getDependencies ();

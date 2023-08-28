# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

AUDIO_SUPPORTED = no        # Audio'' is not supported
RGB_MATRIX_SUPPORTED = no   # RGB matrix is supported and enabled by default
RGBLIGHT_SUPPORTED = yes     # RGB underglow is supported, but not enabled by default
RGB_MATRIX_ENABLE = no      # Enable keyboard RGB matrix (do not use together with RGBLIGHT_ENABLE)

SPLIT_KEYBOARD = yes

# shrink
ENABLE_LTO = yes
CFLAGS += -flto
COMBO_ENABLE = no
ENCODER_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_KEYCODE_ENABLE = no
WPM_ENABLE = no
DYNAMIC_MACRO_ENABLE = no

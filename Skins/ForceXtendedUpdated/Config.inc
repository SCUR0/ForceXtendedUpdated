[Variables]

;============================================================================
; ForceXtended Updated Configuration File
;
; Edit the options below to customise this skin for your setup.
;============================================================================


;============================================================================
; General
;============================================================================

; Stylesheets are over-written when upgrading this skin.  If you intend on
; editing the stylesheet you may wish to copy it use your custom one here.
; Stylesheets are stored in "@Resources\Stylesheets".
STYLESHEET=Default

; Anti-Alias (Enable = 1 / Disable = 0)
AA=0

; Number of decimal places to use for size strings
NUM_DECIMAL_PLACES=1

; Unit to display temperatures in.  Valid vales are "C", "F" and "K".
TEMP_UNIT=C

; Maximum temperature (in the temperature unit defined above).
TEMP_MAX=100


;============================================================================
; Blank
;============================================================================

; Sets the height of the "Blank" module (this can come in useful if you want
; the skin to fill the whole height of the screen).
BLANK_HEIGHT=10


;============================================================================
; CPU
;
; SpeedFan provides sensory data for fans, temperatures and the like.  You'll
; need to download and install a copy for some features to work.
; 
;============================================================================

; Number of cores/threads to display.
; "%NUMBER_OF_PROCESSORS%" (to choose automatically).
CPU_CORES=%NUMBER_OF_PROCESSORS%

; Set to relevant SpeedFan's IDs for your setup
SF_CPU_TEMP=2


;============================================================================
; DateTime
;============================================================================

; Format to 12h or 24 clock.  Valid values are "12" or "24".
CLOCK_HOURS=12


;============================================================================
; Drives
;
; SpeedFan provides sensory data for fans, temperatures and the like.  You'll
; need to download and install a copy for some features to work.
; Download: http://www.almico.com/speedfan.php
;============================================================================

; These will generally by the corresponding drive letter, but you can do more
; exotic things in Windows like mount drives onto drives, in which case the
; drive may not have a drive letter, and you can reference the mount point
; instead.  For example, you may store you Steam folder on another drive, in
; which case you'll need something like this to see it:
; Z_DRIVE_MOUNT=C:\Program Files (x86)\Steam
A_DRIVE_MOUNT=A:
B_DRIVE_MOUNT=B:
C_DRIVE_MOUNT=C:
D_DRIVE_MOUNT=D:
E_DRIVE_MOUNT=E:
F_DRIVE_MOUNT=F:
G_DRIVE_MOUNT=G:
H_DRIVE_MOUNT=H:
I_DRIVE_MOUNT=I:
J_DRIVE_MOUNT=J:
K_DRIVE_MOUNT=K:
L_DRIVE_MOUNT=L:
M_DRIVE_MOUNT=M:
N_DRIVE_MOUNT=N:
O_DRIVE_MOUNT=O:
P_DRIVE_MOUNT=P:
Q_DRIVE_MOUNT=Q:
R_DRIVE_MOUNT=R:
S_DRIVE_MOUNT=S:
T_DRIVE_MOUNT=T:
U_DRIVE_MOUNT=U:
V_DRIVE_MOUNT=V:
W_DRIVE_MOUNT=W:
X_DRIVE_MOUNT=X:
Y_DRIVE_MOUNT=Y:
Z_DRIVE_MOUNT=Z:

; Set to relevant SpeedFan's IDs for your setup.  You can hide a temperature
; by setting the value to "-1".
SF_A_DRIVE_TEMP=-1
SF_B_DRIVE_TEMP=-1
SF_C_DRIVE_TEMP=-1
SF_D_DRIVE_TEMP=-1
SF_E_DRIVE_TEMP=-1
SF_F_DRIVE_TEMP=-1
SF_G_DRIVE_TEMP=-1
SF_H_DRIVE_TEMP=-1
SF_I_DRIVE_TEMP=-1
SF_J_DRIVE_TEMP=-1
SF_K_DRIVE_TEMP=-1
SF_L_DRIVE_TEMP=-1
SF_M_DRIVE_TEMP=-1
SF_N_DRIVE_TEMP=-1
SF_O_DRIVE_TEMP=-1
SF_P_DRIVE_TEMP=-1
SF_Q_DRIVE_TEMP=-1
SF_R_DRIVE_TEMP=-1
SF_S_DRIVE_TEMP=-1
SF_T_DRIVE_TEMP=-1
SF_U_DRIVE_TEMP=-1
SF_V_DRIVE_TEMP=-1
SF_W_DRIVE_TEMP=-1
SF_X_DRIVE_TEMP=-1
SF_Y_DRIVE_TEMP=-1
SF_Z_DRIVE_TEMP=-1


;============================================================================
; MediaPlayer
;
; For a list of supported media players see:
; http://docs.rainmeter.net/manual/plugins/nowplaying/
;============================================================================

; Your media player
MEDIA_PLAYER=iTunes


;============================================================================
; Network
;============================================================================

; Network bandwidth interface option. 0 = All
INTERFACE=Best

TCP_VERSION=TCPv4

; Address to use for ping queries
PING_ADDRESS=www.google.com

; Max ping timeout
PING_TIMEOUT=30000

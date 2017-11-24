/*
 *In order to control my Tail Sitter VTOL drone, I made this modified version which is based on MWC 2.4.
*/

/*
 * 这是基于MWC2.4的Tail-Sitter式的VTOL控制代码。
 * Tail-Sitter的飞行模式是悬停时头朝上，并且靠尾部的起落架降落。特点是结构简单，没有额外的运动机构，
 * 而且在悬停和平飞两种模式下，均用到所有的发动机，不存在额外的负载。
 * 该版本的代码通过控制四个电机的转速来完成所有的姿态控制，没有舵机控制的舵面。
 * 具体的安装和使用请参考网站：www.openuav.cn/VTOL
 */

/*
 * Welcome to MultiWii.
 *
 * If you see this message, chances are you are using the Arduino IDE. That is ok.
 * To get the MultiWii program configured for your copter, you must switch to the tab named 'config.h'.
 * Maybe that tab is not visible in the list at the top, then you must use the drop down list at the right
 * to access that tab. In that tab you must enable your baord or sensors and optionally various features.
 * For more info go to http://www.multiwii.com/wiki/index.php?title=Main_Page
 *
 * Have fun, and do not forget MultiWii is made possible and brought to you under the GPL License.
 *
 */


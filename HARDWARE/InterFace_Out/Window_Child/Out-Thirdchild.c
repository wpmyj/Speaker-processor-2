/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.32                          *
*        Compiled Oct  8 2015, 11:59:02                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define Spinbox_x  105

#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_SPINBOX_0 (GUI_ID_USER + 0x01)
#define ID_SPINBOX_1 (GUI_ID_USER + 0x02)
#define ID_SPINBOX_2 (GUI_ID_USER + 0x03)
#define ID_SPINBOX_3 (GUI_ID_USER + 0x04)
#define ID_SPINBOX_4 (GUI_ID_USER + 0x05)
#define ID_TEXT_0 (GUI_ID_USER + 0x06)
#define ID_TEXT_1 (GUI_ID_USER + 0x07)
#define ID_TEXT_2 (GUI_ID_USER + 0x08)
#define ID_TEXT_3 (GUI_ID_USER + 0x09)
#define ID_TEXT_4 (GUI_ID_USER + 0x0A)
#define ID_TEXT_5 (GUI_ID_USER + 0x0B)
#define ID_DROPDOWN_0 (GUI_ID_USER + 0x0C)
#define ID_BUTTON_0 (GUI_ID_USER + 0x0D)
// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
	{ WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 285, 240, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "Button", ID_BUTTON_0, 230, 25, 50, 34, 0, 0x0, 0 },//右上角的开关
	{ SPINBOX_CreateIndirect, "Spinbox", ID_SPINBOX_0, Spinbox_x, 25, 110, 34, 0, 0x0, 0 },
	{ SPINBOX_CreateIndirect, "Spinbox", ID_SPINBOX_1, Spinbox_x, 70, 110, 34, 0, 0x0, 0 },
	{ DROPDOWN_CreateIndirect, "Dropdown", ID_DROPDOWN_0, Spinbox_x, 120, 110, 18, 0, 0x0, 0 },
	{ SPINBOX_CreateIndirect, "Spinbox", ID_SPINBOX_3, Spinbox_x, 160, 110, 34, 0, 0x0, 0 },
	{ SPINBOX_CreateIndirect, "Spinbox", ID_SPINBOX_4, Spinbox_x, 205, 110, 34, 0, 0x0, 0 },
	{ TEXT_CreateIndirect, "Text", ID_TEXT_1, 0, 30, 100, 20, 0, 0x64, 0 },
	{ TEXT_CreateIndirect, "Text", ID_TEXT_2, 0, 75, 100, 20, 0, 0x64, 0 },
	{ TEXT_CreateIndirect, "Text", ID_TEXT_3, 0, 120, 100, 20, 0, 0x64, 0 },
	{ TEXT_CreateIndirect, "Text", ID_TEXT_4, 0, 165, 100, 20, 0, 0x64, 0 },
	{ TEXT_CreateIndirect, "Text", ID_TEXT_5, 0, 210, 100, 20, 0, 0x64, 0 },
	{ TEXT_CreateIndirect, "Text", ID_TEXT_0, 71, 0, 150, 20, 0, 0x64, 0 },
	// USER START (Optionally insert additional widgets)
	// USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
	WM_HWIN hItem, hItem1;
	int     NCode;
	int     Id;

	switch (pMsg->MsgId) {

	//控件初始化
	case WM_INIT_DIALOG:
		//选值框初始化
		hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_0);
		SPINBOX_SetEdge(hItem, SPINBOX_EDGE_CENTER); //按钮在左右两边
		SPINBOX_SetFont(hItem, GUI_FONT_20_1); //设置字体

		hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_1);
		SPINBOX_SetEdge(hItem, SPINBOX_EDGE_CENTER); //按钮在左右两边
		SPINBOX_SetFont(hItem, GUI_FONT_20_1); //设置字体

		hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_2);
		SPINBOX_SetEdge(hItem, SPINBOX_EDGE_CENTER); //按钮在左右两边
		SPINBOX_SetFont(hItem, GUI_FONT_20_1); //设置字体

		hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_3);
		SPINBOX_SetEdge(hItem, SPINBOX_EDGE_CENTER); //按钮在左右两边
		SPINBOX_SetFont(hItem, GUI_FONT_20_1); //设置字体

		hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_4);
		SPINBOX_SetEdge(hItem, SPINBOX_EDGE_CENTER); //按钮在左右两边
		SPINBOX_SetFont(hItem, GUI_FONT_20_1); //设置字体

		//text控件初始化
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
		TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER); //居中显示
		TEXT_SetText(hItem, "OUTPUT-EQ"); //显示字符串
		TEXT_SetFont(hItem, GUI_FONT_20_1);

		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
		TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER); //居中显示
		TEXT_SetText(hItem, "BAND"); //显示字符串
		TEXT_SetFont(hItem, GUI_FONT_20_1);

		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_2);
		TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER); //居中显示
		TEXT_SetText(hItem, "FREQ/Hz"); //显示字符串
		TEXT_SetFont(hItem, GUI_FONT_20_1);

		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);
		TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER); //居中显示
		TEXT_SetText(hItem, "TYPE"); //显示字符串
		TEXT_SetFont(hItem, GUI_FONT_20_1);

		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_4);
		TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER); //居中显示
		TEXT_SetText(hItem, "GAIN/dB"); //显示字符串
		TEXT_SetFont(hItem, GUI_FONT_20_1);

		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_5);
		TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER); //居中显示
		TEXT_SetText(hItem, "Q"); //显示字符串
		TEXT_SetFont(hItem, GUI_FONT_20_1);

		//下拉框初始化
		hItem = WM_GetDialogItem(pMsg->hWin, ID_DROPDOWN_0);
		DROPDOWN_AddString(hItem, "PEQ");
		DROPDOWN_AddString(hItem, "HS");
		DROPDOWN_AddString(hItem, "LS");
		DROPDOWN_SetFont(hItem, GUI_FONT_20_1);
		//DROPDOWN_SetAutoScroll(hItem, 1); //增加滚动条
		//DROPDOWN_SetScrollbarWidth(hItem, 16); //滚动条大小
		DROPDOWN_SetListHeight(hItem, 60); //设置显示高度

		break;

	case WM_PAINT:
		//全局背景
		GUI_SetBkColor(GUI_LIGHTBLUE);
		GUI_Clear();

		//主题项
		GUI_SetColor(GUI_RED);
		GUI_FillRect(0, 0, 285, 20);

		//画线
		GUI_SetColor(GUI_BLACK);
		GUI_DrawVLine(100, 21, 240);
		GUI_DrawHLine(64, 0, 285);
		GUI_DrawHLine(109, 0, 285);
		GUI_DrawHLine(154, 0, 285);
		GUI_DrawHLine(199, 0, 285);
		GUI_DrawHLine(244, 0, 285);
		break;
	default:
		WM_DefaultProc(pMsg);
		break;
	}
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateWindow
*/
WM_HWIN Out_Thirdchild(void);
WM_HWIN Out_Thirdchild(void) {
	WM_HWIN hWin;

	hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
	return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/

object GanttSeriesEditor: TGanttSeriesEditor
  Left = 262
  Top = 262
  BorderIcons = [biSystemMenu]
  ClientHeight = 208
  ClientWidth = 169
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 44
    Top = 44
    Width = 35
    Height = 13
    Alignment = taRightJustify
    Caption = '&Height:'
    FocusControl = SEPointVertSize
  end
  object Label1: TLabel
    Left = 11
    Top = 162
    Width = 70
    Height = 13
    Caption = '&Transparency:'
    FocusControl = Edit1
  end
  object SEPointVertSize: TEdit
    Left = 85
    Top = 40
    Width = 40
    Height = 21
    HelpContext = 674
    TabOrder = 0
    Text = '1'
    OnChange = SEPointVertSizeChange
  end
  object BConnLines: TButtonPen
    Left = 6
    Top = 8
    Width = 138
    HelpContext = 167
    Caption = 'Co&nnecting Lines...'
    TabOrder = 1
  end
  object UDPointVertSize: TUpDown
    Left = 125
    Top = 40
    Width = 15
    Height = 21
    HelpContext = 674
    Associate = SEPointVertSize
    Min = 1
    Max = 1000
    Position = 1
    TabOrder = 2
  end
  object GPLine: TGroupBox
    Left = 6
    Top = 75
    Width = 139
    Height = 72
    TabOrder = 3
    object BColor: TButtonColor
      Left = 8
      Top = 12
      HelpContext = 421
      Caption = '&Color...'
      TabOrder = 0
    end
    object CBColorEach: TCheckBox
      Left = 8
      Top = 46
      Width = 105
      Height = 17
      HelpContext = 164
      Caption = 'Color &Each'
      TabOrder = 1
      OnClick = CBColorEachClick
    end
  end
  object Edit1: TEdit
    Left = 10
    Top = 179
    Width = 40
    Height = 21
    HelpContext = 674
    TabOrder = 4
    Text = '0'
    OnChange = Edit1Change
  end
  object UpDown1: TUpDown
    Left = 50
    Top = 179
    Width = 15
    Height = 21
    HelpContext = 674
    Associate = Edit1
    TabOrder = 5
  end
end

object TeeShadowEditor: TTeeShadowEditor
  Left = 370
  Top = 290
  BorderStyle = bsDialog
  Caption = 'Shadow editor'
  ClientHeight = 192
  ClientWidth = 247
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object LTransp: TLabel
    Left = 123
    Top = 86
    Width = 68
    Height = 13
    Alignment = taRightJustify
    Caption = '&Transparency:'
    FocusControl = EShadowTransp
  end
  object Label2: TLabel
    Left = 40
    Top = 128
    Width = 21
    Height = 13
    Alignment = taRightJustify
    Caption = '&Blur:'
    FocusControl = TBBlur
  end
  object EShadowTransp: TEdit
    Left = 194
    Top = 82
    Width = 29
    Height = 21
    HelpContext = 1851
    TabOrder = 1
    Text = '0'
    OnChange = EShadowTranspChange
  end
  object UDShadowTransp: TUpDown
    Left = 223
    Top = 82
    Width = 15
    Height = 21
    HelpContext = 1851
    Associate = EShadowTransp
    TabOrder = 2
  end
  object BShadowColor: TButtonColor
    Left = 8
    Top = 32
    HelpContext = 1318
    Caption = '&Color...'
    TabOrder = 0
    OnClick = BShadowColorClick
  end
  object BOK: TButton
    Left = 160
    Top = 156
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 3
    OnClick = BOKClick
  end
  object CBSmooth: TCheckBox
    Left = 8
    Top = 104
    Width = 97
    Height = 17
    Caption = '&Smooth'
    Checked = True
    State = cbChecked
    TabOrder = 4
    OnClick = CBSmoothClick
  end
  object GroupBox1: TGroupBox
    Left = 104
    Top = 6
    Width = 137
    Height = 66
    Caption = 'Size:'
    TabOrder = 5
    object Label1: TLabel
      Left = 48
      Top = 16
      Width = 27
      Height = 13
      Alignment = taRightJustify
      Caption = '&Horiz:'
      FocusControl = Edit1
    end
    object Label5: TLabel
      Left = 53
      Top = 42
      Width = 22
      Height = 13
      Alignment = taRightJustify
      Caption = 'V&ert:'
      FocusControl = EVertSize
    end
    object Edit1: TEdit
      Left = 79
      Top = 12
      Width = 29
      Height = 21
      HelpContext = 1319
      TabOrder = 0
      Text = '0'
      OnChange = Edit1Change
    end
    object UDShadowSize: TUpDown
      Left = 108
      Top = 12
      Width = 15
      Height = 21
      HelpContext = 1319
      Associate = Edit1
      Min = -1000
      Max = 1000
      TabOrder = 1
    end
    object EVertSize: TEdit
      Left = 79
      Top = 38
      Width = 29
      Height = 21
      HelpContext = 1320
      TabOrder = 2
      Text = '0'
      OnChange = EVertSizeChange
    end
    object UDShaVert: TUpDown
      Left = 108
      Top = 38
      Width = 15
      Height = 21
      HelpContext = 1320
      Associate = EVertSize
      Min = -1000
      Max = 1000
      TabOrder = 3
    end
  end
  object CBVisible: TCheckBox
    Left = 6
    Top = 7
    Width = 97
    Height = 17
    Caption = '&Visible'
    TabOrder = 6
    OnClick = CBVisibleClick
  end
  object TBBlur: TTrackBar
    Left = 61
    Top = 127
    Width = 99
    Height = 25
    Max = 75
    Min = -75
    PageSize = 10
    Frequency = 5
    TabOrder = 7
    ThumbLength = 12
    OnChange = TBBlurChange
  end
  object TBColor: TTrackBar
    Left = 3
    Top = 63
    Width = 86
    Height = 25
    LineSize = 5
    Max = 240
    PageSize = 20
    Frequency = 20
    TabOrder = 8
    ThumbLength = 12
    OnChange = TBColorChange
  end
  object CBClip: TCheckBox
    Left = 32
    Top = 152
    Width = 97
    Height = 17
    Caption = 'Cl&ip'
    TabOrder = 9
    OnClick = CBClipClick
  end
end

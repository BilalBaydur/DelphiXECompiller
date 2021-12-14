object PenDialog: TPenDialog
  Left = 437
  Top = 286
  ActiveControl = CBVisible
  BorderIcons = [biSystemMenu]
  Caption = 'Border Editor'
  ClientHeight = 127
  ClientWidth = 261
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object LWidth: TLabel
    Left = 175
    Top = 38
    Width = 32
    Height = 13
    Alignment = taRightJustify
    Caption = '&Width:'
    FocusControl = SEWidth
  end
  object LStyle: TLabel
    Left = 97
    Top = 9
    Width = 28
    Height = 13
    Alignment = taRightJustify
    Caption = '&Style:'
    FocusControl = CBStyle
  end
  object LSpace: TLabel
    Left = 174
    Top = 70
    Width = 33
    Height = 13
    Alignment = taRightJustify
    Caption = 'Sp&ace:'
    FocusControl = ESpace
  end
  object CBVisible: TCheckBox
    Left = 6
    Top = 8
    Width = 69
    Height = 17
    HelpContext = 680
    Caption = '&Visible'
    TabOrder = 0
    OnClick = CBVisibleClick
  end
  object SEWidth: TEdit
    Left = 214
    Top = 34
    Width = 33
    Height = 21
    HelpContext = 1457
    TabOrder = 3
    Text = '1'
    OnChange = SEWidthChange
  end
  object BOk: TButton
    Left = 104
    Top = 104
    Width = 75
    Height = 25
    Caption = 'OK'
    Default = True
    ModalResult = 1
    TabOrder = 5
  end
  object BCancel: TButton
    Left = 188
    Top = 104
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Cancel'
    ModalResult = 2
    TabOrder = 6
    OnClick = BCancelClick
  end
  object UDWidth: TUpDown
    Left = 247
    Top = 34
    Width = 15
    Height = 21
    HelpContext = 1457
    Associate = SEWidth
    Min = 1
    Position = 1
    TabOrder = 4
  end
  object CBStyle: TComboFlat
    Left = 128
    Top = 6
    Width = 135
    HelpContext = 1457
    Style = csOwnerDrawFixed
    ItemHeight = 15
    TabOrder = 1
    OnChange = CBStyleChange
    OnDrawItem = CBStyleDrawItem
    Items.Strings = (
      'Solid'
      'Dash'
      'Dot'
      'Dash Dot'
      'Dash Dot Dot')
  end
  object BColor: TButtonColor
    Left = 6
    Top = 34
    HelpContext = 1457
    Caption = '&Color...'
    TabOrder = 2
    OnClick = BColorClick
  end
  object CBEndStyle: TComboFlat
    Left = 6
    Top = 73
    Width = 68
    HelpContext = 1828
    TabOrder = 7
    OnChange = CBEndStyleChange
    Items.Strings = (
      'Round'
      'Square'
      'Flat')
  end
  object ESpace: TEdit
    Left = 214
    Top = 66
    Width = 33
    Height = 21
    HelpContext = 1457
    Enabled = False
    TabOrder = 8
    Text = '1'
    OnChange = ESpaceChange
  end
  object UDSpace: TUpDown
    Left = 247
    Top = 66
    Width = 15
    Height = 21
    HelpContext = 1457
    Associate = ESpace
    Enabled = False
    Min = 1
    Position = 1
    TabOrder = 9
  end
end

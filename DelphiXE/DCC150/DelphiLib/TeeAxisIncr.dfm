object AxisIncrement: TAxisIncrement
  Left = 263
  Top = 191
  ActiveControl = BOk
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  Caption = 'Axis Increment'
  ClientHeight = 148
  ClientWidth = 244
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 81
    Width = 50
    Height = 13
    Alignment = taRightJustify
    Caption = '&Increment:'
    FocusControl = ECustom
  end
  object RadioGroup1: TRadioGroup
    Left = 4
    Top = 30
    Width = 234
    Height = 80
    HelpContext = 248
    Caption = 'Increment:'
    Items.Strings = (
      '&Standard:'
      '&Custom:')
    TabOrder = 1
    OnClick = RadioGroup1Click
  end
  object CBSteps: TComboFlat
    Left = 96
    Top = 48
    Width = 129
    HelpContext = 248
    DropDownCount = 18
    TabOrder = 2
    OnChange = CBStepsChange
    Items.Strings = (
      'One Microsecond'
      'One Millisecond'
      'One Second'
      'Five Seconds'
      'Ten Seconds'
      'Fifteen Seconds'
      'Thirty Seconds'
      'One Minute'
      'Five Minutes'
      'Ten Minutes'
      'Fifteen Minutes'
      'Thirty Minutes'
      'One Hour'
      'Two Hours'
      'Six Hours'
      'Twelve Hours'
      'One Day'
      'Two Days'
      'Three Days'
      'One Week'
      'Half Month'
      'One Month'
      'Two Months'
      'Three Months'
      'Four Months'
      'Six Months'
      'One Year')
  end
  object ECustom: TEdit
    Left = 96
    Top = 78
    Width = 129
    Height = 21
    HelpContext = 248
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
  end
  object BOk: TButton
    Left = 70
    Top = 117
    Width = 75
    Height = 25
    Caption = 'OK'
    Default = True
    TabOrder = 4
    OnClick = BOkClick
  end
  object BCancel: TButton
    Left = 163
    Top = 117
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Cancel'
    ModalResult = 2
    TabOrder = 5
  end
  object CBExact: TCheckBox
    Left = 98
    Top = 10
    Width = 143
    Height = 17
    HelpContext = 204
    Caption = '&Exact Date Time'
    TabOrder = 0
    OnClick = CBExactClick
  end
end

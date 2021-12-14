object wwInputTwoStringForm: TwwInputTwoStringForm
  Left = 0
  Top = 0
  Caption = 'Custom Filter'
  ClientHeight = 119
  ClientWidth = 278
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCloseQuery = FormCloseQuery
  OnResize = FormResize
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object FilterLabel: TLabel
    Left = 10
    Top = 28
    Width = 49
    Height = 13
    Caption = 'FilterLabel'
  end
  object FilterLabel2: TLabel
    Left = 10
    Top = 55
    Width = 49
    Height = 13
    Caption = 'FilterLabel'
  end
  object FieldLabel: TLabel
    Left = 10
    Top = 5
    Width = 49
    Height = 13
    Caption = 'FilterLabel'
  end
  object filtervalue: TwwDBEdit
    Left = 65
    Top = 25
    Width = 205
    Height = 21
    TabOrder = 0
    UnboundDataType = wwDefault
    WantReturns = False
    WordWrap = False
  end
  object FilterDateEdit: TwwDBDateTimePicker
    Left = 64
    Top = 90
    Width = 206
    Height = 21
    CalendarAttributes.Font.Charset = DEFAULT_CHARSET
    CalendarAttributes.Font.Color = clWindowText
    CalendarAttributes.Font.Height = -11
    CalendarAttributes.Font.Name = 'Tahoma'
    CalendarAttributes.Font.Style = []
    Epoch = 1950
    ShowButton = True
    TabOrder = 2
    Visible = False
  end
  object filterValue2: TwwDBEdit
    Left = 65
    Top = 52
    Width = 205
    Height = 21
    TabOrder = 1
    UnboundDataType = wwDefault
    WantReturns = False
    WordWrap = False
  end
  object FilterDateEdit2: TwwDBDateTimePicker
    Left = 64
    Top = 98
    Width = 206
    Height = 21
    CalendarAttributes.Font.Charset = DEFAULT_CHARSET
    CalendarAttributes.Font.Color = clWindowText
    CalendarAttributes.Font.Height = -11
    CalendarAttributes.Font.Name = 'Tahoma'
    CalendarAttributes.Font.Style = []
    Epoch = 1950
    ShowButton = True
    TabOrder = 3
    Visible = False
  end
end

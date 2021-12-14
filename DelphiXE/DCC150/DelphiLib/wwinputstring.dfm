object wwInputStringForm: TwwInputStringForm
  Left = 0
  Top = 0
  Caption = 'Custom Filter'
  ClientHeight = 86
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
    Top = 24
    Width = 49
    Height = 13
    Caption = 'FilterLabel'
  end
  object filtervalue: TwwDBEdit
    Left = 65
    Top = 21
    Width = 205
    Height = 21
    TabOrder = 0
    UnboundDataType = wwDefault
    WantReturns = False
    WordWrap = False
  end
  object FilterDateEdit: TwwDBDateTimePicker
    Left = 64
    Top = 48
    Width = 206
    Height = 21
    CalendarAttributes.Font.Charset = DEFAULT_CHARSET
    CalendarAttributes.Font.Color = clWindowText
    CalendarAttributes.Font.Height = -11
    CalendarAttributes.Font.Name = 'Tahoma'
    CalendarAttributes.Font.Style = []
    Epoch = 1950
    ShowButton = True
    TabOrder = 1
    Visible = False
  end
end

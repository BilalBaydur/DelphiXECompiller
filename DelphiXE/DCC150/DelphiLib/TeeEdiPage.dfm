object FormTeePage: TFormTeePage
  Left = 477
  Top = 254
  ActiveControl = SEPointsPerPage
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  ClientHeight = 175
  ClientWidth = 378
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object L17: TLabel
    Left = 80
    Top = 17
    Width = 78
    Height = 13
    Alignment = taRightJustify
    Caption = 'P&oints per Page:'
    FocusControl = SEPointsPerPage
  end
  object LabelPages: TLabel
    Left = 256
    Top = 150
    Width = 3
    Height = 13
    Alignment = taCenter
  end
  object SEPointsPerPage: TEdit
    Left = 164
    Top = 14
    Width = 37
    Height = 21
    HelpContext = 283
    TabOrder = 0
    Text = '0'
    OnChange = SEPointsPerPageChange
  end
  object CBScaleLast: TCheckBox
    Left = 80
    Top = 65
    Width = 161
    Height = 17
    HelpContext = 416
    Caption = '&Scale Last Page'
    TabOrder = 1
    OnClick = CBScaleLastClick
  end
  object UDPointsPerPage: TUpDown
    Left = 201
    Top = 14
    Width = 15
    Height = 21
    HelpContext = 283
    Associate = SEPointsPerPage
    Max = 32000
    TabOrder = 2
  end
  object CBPageLegend: TCheckBox
    Left = 80
    Top = 42
    Width = 161
    Height = 17
    HelpContext = 344
    Caption = '&Current page Legend'
    TabOrder = 3
    OnClick = CBPageLegendClick
  end
  object ChartPageNavigator1: TChartPageNavigator
    Left = 80
    Top = 144
    Width = 168
    Height = 25
    HelpContext = 1488
    TabOrder = 4
    OnButtonClicked = ChartPageNavigator1ButtonClicked
  end
  object CBPageNum: TCheckBox
    Left = 80
    Top = 88
    Width = 161
    Height = 17
    HelpContext = 1693
    Caption = 'Show &Page Number'
    TabOrder = 5
    OnClick = CBPageNumClick
  end
  object CBAutoScale: TCheckBox
    Left = 80
    Top = 112
    Width = 169
    Height = 17
    Caption = '&Auto scale axis'
    TabOrder = 6
    OnClick = CBAutoScaleClick
  end
  object CBNoPages: TCheckBox
    Left = 228
    Top = 15
    Width = 97
    Height = 17
    Caption = '&No pages'
    TabOrder = 7
    OnClick = CBNoPagesClick
  end
  object BEditTool: TButton
    Left = 253
    Top = 86
    Width = 75
    Height = 25
    Caption = '&Edit...'
    TabOrder = 8
    OnClick = BEditToolClick
  end
end

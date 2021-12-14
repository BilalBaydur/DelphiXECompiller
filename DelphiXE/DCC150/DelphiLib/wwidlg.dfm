object wwLookupDlg: TwwLookupDlg
  Left = 285
  Top = 178
  HorzScrollBar.Visible = False
  VertScrollBar.Visible = False
  BorderStyle = bsDialog
  Caption = 'Lookup'
  ClientHeight = 343
  ClientWidth = 344
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clBlack
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = [fsBold]
  KeyPreview = True
  OldCreateOrder = True
  OnCloseQuery = FormCloseQuery
  OnKeyDown = FormKeyDown
  OnKeyUp = FormKeyUp
  PixelsPerInch = 96
  TextHeight = 13
  object SearchCharacterLabel: TLabel
    Left = 8
    Top = 8
    Width = 106
    Height = 13
    Caption = '&Search Characters'
    FocusControl = wwIncrementalSearch1
  end
  object SortByLabel: TLabel
    Left = 8
    Top = 48
    Width = 59
    Height = 13
    Caption = 'Search &By'
    Visible = False
  end
  object wwDBGrid1: TwwDBGrid
    Left = 8
    Top = 84
    Width = 329
    Height = 209
    IniAttributes.FileName = 'delphi32.ini.ini'
    IniAttributes.SectionName = 'wwLookupDlgwwDBGrid1'
    IniAttributes.Delimiter = ';;'
    TitleColor = clBtnFace
    FixedCols = 0
    ShowHorzScrollBar = True
    DataSource = DataSource1
    Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgAlwaysShowSelection, dgConfirmDelete, dgPerfectRowFit]
    TabOrder = 1
    TitleAlignment = taLeftJustify
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clBlack
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = [fsBold]
    TitleLines = 1
    TitleButtons = False
    OnDblClick = wwDBGrid1DblClick
    OnMouseDown = wwDBGrid1MouseDown
    OnColumnMoved = wwDBGrid1ColumnMoved
  end
  object wwIncrementalSearch1: TwwIncrementalSearch
    Left = 8
    Top = 24
    Width = 329
    Height = 20
    Hint = 'Enter characters for incremental search'
    DataSource = DataSource1
    AutoSize = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
  end
  object StatusHeader: THeader
    Left = 56
    Top = 252
    Width = 185
    Height = 21
    Hint = 'Table Name and current record position'
    ParentShowHint = False
    Sections.Sections = (
      #0'8'#0
      #0'8'#0)
    ShowHint = True
    TabOrder = 3
    Visible = False
  end
  object UserButtonPanel: TPanel
    Left = 8
    Top = 300
    Width = 329
    Height = 40
    BevelInner = bvRaised
    BevelOuter = bvLowered
    TabOrder = 2
    Visible = False
    object UserButton1: TButton
      Left = 12
      Top = 8
      Width = 89
      Height = 26
      Caption = 'UserButton1'
      TabOrder = 0
      Visible = False
      OnClick = UserButton1Click
    end
    object UserButton2: TButton
      Left = 124
      Top = 8
      Width = 89
      Height = 26
      Caption = 'UserButton2'
      TabOrder = 1
      Visible = False
      OnClick = UserButton2Click
    end
  end
  object DataSource1: TDataSource
    OnDataChange = DataSource1DataChange
    Left = 300
    Top = 340
  end
end

object TeeGalleryForm: TTeeGalleryForm
  Left = 316
  Top = 320
  AutoScroll = False
  Caption = 'TeeChart Pro Gallery'
  ClientHeight = 379
  ClientWidth = 586
  Color = clBtnFace
  ParentFont = True
  KeyPreview = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnKeyDown = FormKeyDown
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 113
    Top = 31
    Height = 307
  end
  object ChartGalleryPanel1: TChartGalleryPanel
    Left = 116
    Top = 31
    Width = 470
    Height = 307
    OnSelectedChart = ChartGalleryPanel1SelectedChart
    Align = alClient
    ParentColor = True
    TabOrder = 0
  end
  object ChartListBox1: TChartListBox
    Left = 0
    Top = 31
    Width = 113
    Height = 307
    AllowAddSeries = False
    AllowDeleteSeries = False
    EnableChangeColor = False
    EnableDragSeries = False
    EnableChangeType = False
    ShowActiveCheck = False
    ShowSeriesColor = False
    Align = alLeft
    ExtendedSelect = False
    ItemHeight = 24
    MultiSelect = False
    TabOrder = 1
    OnClick = ChartListBox1Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 586
    Height = 31
    Align = alTop
    TabOrder = 2
    object Label1: TLabel
      Left = 8
      Top = 8
      Width = 35
      Height = 13
      Caption = '&Gallery:'
      FocusControl = CBPage
    end
    object CBPage: TComboFlat
      Left = 61
      Top = 4
      Width = 95
      DropDownCount = 25
      Sorted = True
      TabOrder = 0
      OnChange = CBPageChange
    end
    object CB3D: TCheckBox
      Left = 172
      Top = 6
      Width = 73
      Height = 17
      Caption = '&3D'
      Checked = True
      State = cbChecked
      TabOrder = 1
      OnClick = CB3DClick
    end
    object CBSmooth: TCheckBox
      Left = 252
      Top = 6
      Width = 105
      Height = 17
      Caption = '&Smooth'
      Checked = True
      State = cbChecked
      TabOrder = 2
      OnClick = CBSmoothClick
    end
  end
  object PanelBottom: TPanel
    Left = 0
    Top = 338
    Width = 586
    Height = 41
    Align = alBottom
    TabOrder = 3
    object Panel3: TPanel
      Left = 409
      Top = 1
      Width = 176
      Height = 39
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 0
      object BOK: TButton
        Left = 8
        Top = 8
        Width = 75
        Height = 25
        Caption = 'OK'
        Default = True
        ModalResult = 1
        TabOrder = 0
      end
      object BCancel: TButton
        Left = 96
        Top = 8
        Width = 75
        Height = 25
        Cancel = True
        Caption = 'Cancel'
        ModalResult = 2
        TabOrder = 1
      end
    end
  end
end

object TeeGallery: TTeeGallery
  Left = 339
  Top = 289
  AutoScroll = False
  Caption = 'TeeChart Gallery'
  ClientHeight = 427
  ClientWidth = 470
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object P1: TPanel
    Left = 0
    Top = 384
    Width = 470
    Height = 43
    Align = alBottom
    TabOrder = 0
    object CB3D: TCheckBox
      Left = 10
      Top = 10
      Width = 55
      Height = 21
      Caption = '&3D'
      Checked = True
      State = cbChecked
      TabOrder = 0
      OnClick = CB3DClick
    end
    object CBSmooth: TCheckBox
      Left = 68
      Top = 10
      Width = 88
      Height = 21
      Caption = '&Smooth'
      TabOrder = 1
      OnClick = CBSmoothClick
    end
    object CBPalette: TComboFlat
      Left = 164
      Top = 10
      Width = 107
      DropDownCount = 25
      TabOrder = 2
      OnChange = CBPaletteChange
    end
    object Panel1: TPanel
      Left = 292
      Top = 1
      Width = 177
      Height = 41
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 3
      object Button1: TButton
        Left = 7
        Top = 8
        Width = 75
        Height = 25
        Caption = 'OK'
        ModalResult = 1
        TabOrder = 0
      end
      object Button2: TButton
        Left = 94
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
  object TabTypes: TTabControl
    Left = 0
    Top = 0
    Width = 470
    Height = 384
    HelpContext = 1850
    Align = alClient
    HotTrack = True
    TabOrder = 1
    OnChange = TabTypesChange
    object TabPages: TTabControl
      Left = 4
      Top = 6
      Width = 462
      Height = 374
      Align = alClient
      HotTrack = True
      TabOrder = 0
      OnChange = TabPagesChange
      object ChartGalleryPanel1: TChartGalleryPanel
        Left = 4
        Top = 6
        Width = 454
        Height = 364
        OnSelectedChart = ChartGalleryPanel1SelectedChart
        Align = alClient
        BevelOuter = bvNone
        ParentColor = True
        TabOrder = 0
        TabStop = True
      end
    end
  end
end

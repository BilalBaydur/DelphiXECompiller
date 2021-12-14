object ChartPreview: TChartPreview
  Left = 256
  Top = 190
  ActiveControl = TeePreviewPanel1
  AutoScroll = False
  Caption = 'TeeChart Print Preview'
  ClientHeight = 394
  ClientWidth = 502
  Color = clBtnFace
  ParentFont = True
  KeyPreview = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 502
    Height = 38
    Align = alTop
    TabOrder = 0
    OnResize = Panel1Resize
    object Label1: TLabel
      Left = 45
      Top = 12
      Width = 33
      Height = 13
      Alignment = taRightJustify
      Caption = 'P&rinter:'
      FocusControl = CBPrinters
      Layout = tlCenter
    end
    object CBPrinters: TComboFlat
      Left = 80
      Top = 9
      Width = 156
      TabOrder = 0
      OnChange = CBPrintersChange
    end
    object PanelClose: TPanel
      Left = 415
      Top = 1
      Width = 86
      Height = 36
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 1
      object BClose: TButton
        Left = 6
        Top = 7
        Width = 75
        Height = 25
        Cancel = True
        Caption = 'Close'
        Default = True
        ModalResult = 1
        TabOrder = 0
        OnClick = BCloseClick
      end
    end
    object Panel3: TPanel
      Left = 243
      Top = 1
      Width = 172
      Height = 36
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 2
      object BSetupPrinter: TButton
        Left = 8
        Top = 7
        Width = 75
        Height = 25
        Caption = '&Setup...'
        TabOrder = 0
        OnClick = BSetupPrinterClick
      end
      object BPrint: TButton
        Left = 94
        Top = 7
        Width = 75
        Height = 25
        HelpContext = 395
        Caption = '&Print'
        TabOrder = 1
        OnClick = BPrintClick
      end
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 38
    Width = 112
    Height = 356
    Align = alLeft
    TabOrder = 1
    object Orientation: TRadioGroup
      Left = 1
      Top = 1
      Width = 110
      Height = 66
      HelpContext = 398
      Align = alTop
      Caption = 'Orien&tation:'
      Items.Strings = (
        'P&ortrait'
        '&Landscape')
      TabOrder = 0
      OnClick = OrientationClick
    end
    object GBMargins: TGroupBox
      Left = 1
      Top = 67
      Width = 110
      Height = 95
      Align = alTop
      Caption = 'Margins (%)'
      TabOrder = 1
      object SETopMa: TEdit
        Left = 34
        Top = 17
        Width = 27
        Height = 21
        HelpContext = 397
        MaxLength = 32767
        TabOrder = 0
        Text = '0'
        OnChange = SETopMaChange
      end
      object SELeftMa: TEdit
        Left = 6
        Top = 43
        Width = 26
        Height = 21
        HelpContext = 397
        MaxLength = 32767
        TabOrder = 1
        Text = '0'
        OnChange = SELeftMaChange
      end
      object SEBotMa: TEdit
        Left = 34
        Top = 68
        Width = 27
        Height = 21
        HelpContext = 397
        MaxLength = 32767
        TabOrder = 2
        Text = '0'
        OnChange = SEBotMaChange
      end
      object SERightMa: TEdit
        Left = 58
        Top = 43
        Width = 27
        Height = 21
        HelpContext = 397
        MaxLength = 32767
        TabOrder = 3
        Text = '0'
        OnChange = SERightMaChange
      end
      object UDLeftMa: TUpDown
        Left = 32
        Top = 43
        Width = 15
        Height = 21
        HelpContext = 397
        Associate = SELeftMa
        Increment = 5
        TabOrder = 4
      end
      object UDTopMa: TUpDown
        Left = 61
        Top = 17
        Width = 15
        Height = 21
        HelpContext = 397
        Associate = SETopMa
        Increment = 5
        TabOrder = 5
      end
      object UDRightMa: TUpDown
        Left = 85
        Top = 43
        Width = 15
        Height = 21
        HelpContext = 397
        Associate = SERightMa
        Increment = 5
        TabOrder = 6
      end
      object UDBotMa: TUpDown
        Left = 61
        Top = 68
        Width = 15
        Height = 21
        HelpContext = 397
        Associate = SEBotMa
        Increment = 5
        TabOrder = 7
      end
    end
    object ChangeDetailGroup: TGroupBox
      Left = 1
      Top = 220
      Width = 110
      Height = 66
      Align = alTop
      Caption = 'Detail:'
      TabOrder = 2
      object Label2: TLabel
        Left = 6
        Top = 16
        Width = 24
        Height = 13
        Caption = 'More'
        Layout = tlCenter
      end
      object Label3: TLabel
        Left = 69
        Top = 16
        Width = 33
        Height = 13
        Alignment = taRightJustify
        Caption = 'Normal'
        Layout = tlCenter
      end
      object Resolution: TTrackBar
        Left = 6
        Top = 32
        Width = 98
        Height = 25
        HelpContext = 400
        LineSize = 2
        Max = 100
        Frequency = 10
        Position = 99
        TabOrder = 0
        OnChange = TrackBar1Change
      end
    end
    object PanelMargins: TPanel
      Left = 1
      Top = 162
      Width = 110
      Height = 58
      Align = alTop
      BevelOuter = bvNone
      TabOrder = 4
      object BReset: TButton
        Left = 4
        Top = 5
        Width = 101
        Height = 25
        HelpContext = 1331
        Caption = 'Reset &Margins'
        Enabled = False
        TabOrder = 0
        OnClick = BResetClick
      end
      object ShowMargins: TCheckBox
        Left = 7
        Top = 36
        Width = 100
        Height = 15
        HelpContext = 1331
        Caption = '&View Margins'
        Checked = True
        State = cbChecked
        TabOrder = 1
        OnClick = ShowMarginsClick
      end
    end
    object PanelOptions: TPanel
      Left = 1
      Top = 286
      Width = 110
      Height = 69
      Align = alClient
      BevelOuter = bvNone
      TabOrder = 3
      object CBProp: TCheckBox
        Left = 5
        Top = 5
        Width = 97
        Height = 17
        HelpContext = 889
        Caption = 'Proport&ional'
        Checked = True
        State = cbChecked
        TabOrder = 0
        OnClick = CBPropClick
      end
      object CBBitmap: TCheckBox
        Left = 5
        Top = 24
        Width = 97
        Height = 17
        Caption = 'S&mooth'
        TabOrder = 1
        OnClick = CBBitmapClick
      end
    end
  end
  object TeePreviewPanel1: TTeePreviewPanel
    Left = 112
    Top = 38
    Width = 390
    Height = 356
    HelpContext = 1197
    Shadow.Color = clGray
    Shadow.HorizSize = 4
    Shadow.VertSize = 4
    OnChangeMargins = TeePreviewPanel1ChangeMargins
    Gradient.Direction = gdFromTopLeft
    Gradient.EndColor = clGray
    Gradient.Visible = True
    Align = alClient
    TabOrder = 2
  end
end

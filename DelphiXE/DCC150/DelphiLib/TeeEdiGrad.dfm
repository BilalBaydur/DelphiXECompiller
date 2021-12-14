object TeeGradientEditor: TTeeGradientEditor
  Left = 514
  Top = 357
  Width = 278
  Height = 246
  BorderIcons = [biSystemMenu]
  Caption = 'Gradient Editor'
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 25
    Width = 262
    Height = 156
    ActivePage = TabSheet2
    Align = alClient
    TabOrder = 0
    object TabSheet3: TTabSheet
      Caption = 'Default'
      object Gallery: TListBox
        Left = 9
        Top = 9
        Width = 121
        Height = 119
        Align = alLeft
        ItemHeight = 13
        Sorted = True
        TabOrder = 0
        OnClick = GalleryClick
      end
      object Panel3: TPanel
        Left = 0
        Top = 9
        Width = 9
        Height = 110
        Align = alLeft
        BevelOuter = bvNone
        TabOrder = 1
      end
      object Panel4: TPanel
        Left = 0
        Top = 0
        Width = 254
        Height = 9
        Align = alTop
        BevelOuter = bvNone
        TabOrder = 2
      end
      object Panel5: TPanel
        Left = 0
        Top = 119
        Width = 254
        Height = 9
        Align = alBottom
        BevelOuter = bvNone
        TabOrder = 3
      end
      object Panel6: TPanel
        Left = 130
        Top = 9
        Width = 10
        Height = 110
        Align = alLeft
        BevelOuter = bvNone
        TabOrder = 4
      end
      object Panel7: TPanel
        Left = 244
        Top = 9
        Width = 10
        Height = 110
        Align = alRight
        BevelOuter = bvNone
        TabOrder = 5
      end
    end
    object TabSheet1: TTabSheet
      Caption = 'Colors'
      object BSwap: TButton
        Left = 99
        Top = 8
        Width = 55
        Height = 25
        HelpContext = 439
        Caption = 'S&wap'
        TabOrder = 0
        OnClick = BSwapClick
      end
      object BStart: TButtonColor
        Left = 4
        Top = 8
        Width = 88
        HelpContext = 439
        Caption = '&Start...'
        TabOrder = 1
        OnClick = BStartClick
      end
      object BEnd: TButtonColor
        Left = 4
        Top = 71
        Width = 88
        HelpContext = 194
        Caption = '&End...'
        TabOrder = 2
        OnClick = BEndClick
      end
      object BMid: TButtonColor
        Left = 4
        Top = 39
        Width = 88
        HelpContext = 1366
        Caption = '&Middle...'
        TabOrder = 3
        OnClick = BMidClick
      end
      object CBMid: TCheckBox
        Left = 100
        Top = 44
        Width = 104
        Height = 17
        HelpContext = 1366
        Caption = '&No Middle'
        TabOrder = 4
        OnClick = CBMidClick
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Options'
      object Label4: TLabel
        Left = 36
        Top = 7
        Width = 42
        Height = 13
        Alignment = taRightJustify
        Caption = '&Balance:'
        FocusControl = SBBalance
      end
      object LabelBalance: TLabel
        Left = 211
        Top = 8
        Width = 23
        Height = 13
        Caption = '50 %'
      end
      object Label6: TLabel
        Left = 46
        Top = 103
        Width = 30
        Height = 13
        Alignment = taRightJustify
        Caption = '&Angle:'
        FocusControl = EAngle
      end
      object SBBalance: TScrollBar
        Left = 83
        Top = 6
        Width = 121
        Height = 16
        HelpContext = 1914
        PageSize = 0
        TabOrder = 0
        OnChange = SBBalanceChange
      end
      object GroupBox2: TGroupBox
        Left = 8
        Top = 27
        Width = 232
        Height = 65
        Caption = 'Radial offset:'
        TabOrder = 1
        object Label2: TLabel
          Left = 40
          Top = 17
          Width = 27
          Height = 13
          Alignment = taRightJustify
          Caption = '&Horiz:'
          FocusControl = TrackBar1
        end
        object Label3: TLabel
          Left = 45
          Top = 39
          Width = 22
          Height = 13
          Alignment = taRightJustify
          Caption = '&Vert:'
          FocusControl = TrackBar2
        end
        object LRadialX: TLabel
          Left = 186
          Top = 17
          Width = 6
          Height = 13
          Caption = '0'
        end
        object LRadialY: TLabel
          Left = 186
          Top = 40
          Width = 6
          Height = 13
          Caption = '0'
        end
        object TrackBar1: TTrackBar
          Left = 67
          Top = 14
          Width = 117
          Height = 25
          HelpContext = 1915
          Max = 300
          Min = -300
          Frequency = 50
          TabOrder = 0
          TickStyle = tsNone
          OnChange = TrackBar1Change
        end
        object TrackBar2: TTrackBar
          Left = 67
          Top = 37
          Width = 117
          Height = 25
          HelpContext = 1916
          Max = 300
          Min = -300
          Frequency = 50
          TabOrder = 1
          TickStyle = tsNone
          OnChange = TrackBar2Change
        end
      end
      object EAngle: TEdit
        Left = 80
        Top = 100
        Width = 41
        Height = 21
        TabOrder = 2
        Text = '0'
        OnChange = EAngleChange
      end
      object UDAngle: TUpDown
        Left = 121
        Top = 100
        Width = 15
        Height = 21
        Associate = EAngle
        Max = 360
        TabOrder = 3
      end
      object TBAngle: TTrackBar
        Left = 141
        Top = 101
        Width = 100
        Height = 24
        Max = 360
        Frequency = 20
        TabOrder = 4
        ThumbLength = 12
        OnChange = TBAngleChange
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'Directions'
      ImageIndex = 3
      object Directions: TChartGalleryPanel
        Left = 0
        Top = 0
        Width = 262
        Height = 137
        OnChangeChart = DirectionsChangeChart
        Align = alClient
        BevelOuter = bvNone
        ParentColor = True
        TabOrder = 0
      end
    end
    object TabSheet5: TTabSheet
      Caption = 'SubGradient'
      ImageIndex = 4
      object Label5: TLabel
        Left = 8
        Top = 56
        Width = 68
        Height = 13
        Caption = '&Transparency:'
        FocusControl = SBTransp
      end
      object SBTransp: TScrollBar
        Left = 8
        Top = 77
        Width = 177
        Height = 16
        PageSize = 0
        TabOrder = 0
        OnChange = SBTranspChange
      end
      object BSubEdit: TButtonGradient
        Left = 112
        Top = 8
        Caption = '&Edit...'
        TabOrder = 1
      end
      object CBSubVisible: TCheckBox
        Left = 9
        Top = 12
        Width = 97
        Height = 17
        Caption = '&Visible'
        TabOrder = 2
        OnClick = CBSubVisibleClick
      end
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 181
    Width = 262
    Height = 29
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 1
    object BOk: TButton
      Left = 79
      Top = 3
      Width = 75
      Height = 25
      Caption = 'OK'
      Default = True
      ModalResult = 1
      TabOrder = 0
    end
    object BCancel: TButton
      Left = 167
      Top = 3
      Width = 75
      Height = 25
      Cancel = True
      Caption = 'Cancel'
      ModalResult = 2
      TabOrder = 1
      OnClick = BCancelClick
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 262
    Height = 25
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 2
    object Label1: TLabel
      Left = 82
      Top = 6
      Width = 45
      Height = 13
      Alignment = taRightJustify
      Caption = '&Direction:'
      FocusControl = CBDirection
    end
    object CBVisible: TCheckBox
      Left = 5
      Top = 5
      Width = 62
      Height = 17
      HelpContext = 678
      Caption = '&Visible'
      TabOrder = 0
      OnClick = CBVisibleClick
    end
    object CBDirection: TComboFlat
      Left = 130
      Top = 2
      Width = 113
      HelpContext = 184
      DropDownCount = 10
      TabOrder = 1
      OnChange = CBDirectionChange
      Items.Strings = (
        'Top Bottom'
        'Bottom Top'
        'Left Right'
        'Right Left'
        'From Center'
        'From Top Left'
        'From Bottom Left'
        'Radial'
        'Diagonal Up'
        'Diagonal Down')
    end
  end
end

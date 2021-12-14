object ChartShapeEditor: TChartShapeEditor
  Left = 221
  Top = 232
  Width = 327
  Height = 240
  ActiveControl = CBStyle
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 311
    Height = 204
    ActivePage = TabSheet1
    Align = alClient
    HotTrack = True
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'Style'
      object Label3: TLabel
        Left = 19
        Top = 8
        Width = 37
        Height = 17
        Alignment = taRightJustify
        AutoSize = False
        Caption = '&Style:'
        FocusControl = CBStyle
      end
      object Label6: TLabel
        Left = 120
        Top = 104
        Width = 68
        Height = 13
        Caption = '&Transparency:'
        FocusControl = Edit1
      end
      object CBStyle: TComboFlat
        Left = 59
        Top = 4
        Width = 145
        HelpContext = 446
        TabOrder = 0
        OnChange = CBStyleChange
        Items.Strings = (
          'Rectangle'
          'Circle'
          'Vertical Line'
          'Horiz. Line'
          'Triangle'
          'Invert. Triangle'
          'Line'
          'Diamond'
          'Cube'
          'Cross'
          'Diagonal Cross'
          'Star'
          'Pyramid'
          'Invert. Pyramid')
      end
      object BShapeColor: TButtonColor
        Left = 6
        Top = 35
        Width = 94
        HelpContext = 421
        Caption = '&Color...'
        TabOrder = 1
      end
      object BShapePen: TButtonPen
        Left = 6
        Top = 68
        Width = 94
        HelpContext = 376
        Caption = 'Bor&der...'
        TabOrder = 2
      end
      object CBTrans: TCheckBox
        Left = 120
        Top = 71
        Width = 120
        Height = 17
        HelpContext = 657
        Caption = 'Tra&nsparent'
        TabOrder = 3
        OnClick = CBTransClick
      end
      object BShapeBrush: TButton
        Left = 6
        Top = 101
        Width = 94
        Height = 25
        HelpContext = 117
        Caption = '&Pattern...'
        TabOrder = 4
        OnClick = BShapeBrushClick
      end
      object CBRound: TCheckBox
        Left = 120
        Top = 38
        Width = 130
        Height = 17
        HelpContext = 412
        Caption = '&Round Rectangle'
        TabOrder = 5
        OnClick = CBRoundClick
      end
      object BGradient: TButtonGradient
        Left = 6
        Top = 134
        Width = 94
        HelpContext = 117
        Caption = '&Gradient...'
        TabOrder = 6
      end
      object Edit1: TEdit
        Left = 120
        Top = 120
        Width = 49
        Height = 21
        TabOrder = 7
        Text = '0'
        OnChange = Edit1Change
      end
      object UDTransp: TUpDown
        Left = 169
        Top = 120
        Width = 15
        Height = 21
        Associate = Edit1
        TabOrder = 8
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Text'
      object Label5: TLabel
        Left = 7
        Top = 9
        Width = 45
        Height = 14
        AutoSize = False
        Caption = '&Text:'
        FocusControl = MemoText
      end
      object MemoText: TMemo
        Left = 7
        Top = 26
        Width = 129
        Height = 95
        HelpContext = 641
        TabOrder = 0
        OnChange = MemoTextChange
      end
      object RGVertAlign: TRadioGroup
        Left = 144
        Top = 56
        Width = 96
        Height = 66
        HelpContext = 1421
        Caption = '&Alignment'
        Items.Strings = (
          'Top'
          'Center'
          'Bottom')
        TabOrder = 1
        OnClick = RGVertAlignClick
      end
      object RGAlign: TRadioGroup
        Left = 8
        Top = 133
        Width = 232
        Height = 37
        HelpContext = 41
        Caption = '&Horiz. Alignment'
        Columns = 3
        Items.Strings = (
          'Left'
          'Center'
          'Right')
        TabOrder = 2
        OnClick = RGAlignClick
      end
      object Button1: TButton
        Left = 144
        Top = 24
        Width = 75
        Height = 25
        Caption = '&Edit...'
        TabOrder = 3
        OnClick = Button1Click
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Position'
      object Label1: TLabel
        Left = 40
        Top = 84
        Width = 21
        Height = 13
        Alignment = taRightJustify
        Caption = '&Left:'
        FocusControl = SEX0
      end
      object LX1: TLabel
        Left = 260
        Top = 84
        Width = 25
        Height = 13
        Caption = '&Right'
        FocusControl = SEX1
      end
      object Label2: TLabel
        Left = 103
        Top = 60
        Width = 22
        Height = 13
        Alignment = taRightJustify
        Caption = '&Top:'
        FocusControl = SEY0
      end
      object LY1: TLabel
        Left = 89
        Top = 108
        Width = 36
        Height = 13
        Alignment = taRightJustify
        Caption = '&Bottom:'
        FocusControl = SEY1
      end
      object Label4: TLabel
        Left = 98
        Top = 18
        Width = 27
        Height = 13
        Alignment = taRightJustify
        Caption = '&Units:'
        FocusControl = CBUnits
      end
      object SEX0: TEdit
        Left = 64
        Top = 80
        Width = 65
        Height = 21
        HelpContext = 693
        TabOrder = 0
        OnChange = SEX0Change
      end
      object SEX1: TEdit
        Left = 192
        Top = 80
        Width = 65
        Height = 21
        HelpContext = 693
        TabOrder = 1
        OnChange = SEX1Change
      end
      object SEY0: TEdit
        Left = 128
        Top = 56
        Width = 65
        Height = 21
        HelpContext = 693
        TabOrder = 2
        OnChange = SEY0Change
      end
      object SEY1: TEdit
        Left = 128
        Top = 104
        Width = 65
        Height = 21
        HelpContext = 693
        TabOrder = 3
        OnChange = SEY1Change
      end
      object CBUnits: TComboFlat
        Left = 128
        Top = 15
        Width = 105
        HelpContext = 700
        TabOrder = 4
        OnChange = CBUnitsChange
        Items.Strings = (
          'Pixels'
          'Axis'
          'Axis Origin')
      end
    end
    object TabFont: TTabSheet
      Caption = 'Font'
    end
  end
end

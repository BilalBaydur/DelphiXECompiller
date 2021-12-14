object CircledSeriesEditor: TCircledSeriesEditor
  Left = 367
  Top = 240
  AutoScroll = False
  ClientHeight = 228
  ClientWidth = 229
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 229
    Height = 228
    ActivePage = TabOptions
    Align = alClient
    TabOrder = 0
    object TabOptions: TTabSheet
      Caption = 'Options'
      object Label1: TLabel
        Left = 111
        Top = 10
        Width = 43
        Height = 13
        Alignment = taRightJustify
        Caption = '&Rotation:'
        FocusControl = Edit1
      end
      object CBCircled: TCheckBox
        Left = 5
        Top = 8
        Width = 84
        Height = 17
        HelpContext = 148
        Caption = '&Circled'
        TabOrder = 0
        OnClick = CBCircledClick
      end
      object CB3D: TCheckBox
        Left = 5
        Top = 31
        Width = 108
        Height = 17
        HelpContext = 675
        Caption = '&3 Dimensions'
        TabOrder = 1
        OnClick = CB3DClick
      end
      object Edit1: TEdit
        Left = 159
        Top = 6
        Width = 39
        Height = 21
        HelpContext = 410
        TabOrder = 2
        Text = '0'
        OnChange = SERotationChange
      end
      object BBack: TButtonColor
        Left = 6
        Top = 62
        HelpContext = 145
        Caption = 'C&olor...'
        TabOrder = 3
        OnClick = BBackClick
      end
      object CBTransp: TCheckBox
        Left = 5
        Top = 95
        Width = 121
        Height = 17
        HelpContext = 145
        Caption = '&Transparent'
        TabOrder = 4
        OnClick = CBTranspClick
      end
      object BGradient: TButtonGradient
        Left = 112
        Top = 62
        Width = 94
        HelpContext = 1810
        Caption = '&Gradient...'
        TabOrder = 5
        OnClick = BGradientClick
      end
      object UDRot: TUpDown
        Left = 198
        Top = 6
        Width = 15
        Height = 21
        HelpContext = 410
        Associate = Edit1
        Max = 360
        Increment = 5
        TabOrder = 6
        Wrap = True
      end
    end
    object TabRadius: TTabSheet
      Caption = 'Radius'
      ImageIndex = 1
      object GroupBox2: TGroupBox
        Left = 4
        Top = 8
        Width = 210
        Height = 73
        TabOrder = 0
        object Label4: TLabel
          Left = 3
          Top = 19
          Width = 67
          Height = 21
          Alignment = taRightJustify
          AutoSize = False
          Caption = '&Horizontal:'
          FocusControl = Edit2
        end
        object Label5: TLabel
          Left = 3
          Top = 47
          Width = 67
          Height = 21
          Alignment = taRightJustify
          AutoSize = False
          Caption = '&Vertical:'
          FocusControl = Edit3
        end
        object Edit2: TEdit
          Left = 72
          Top = 15
          Width = 33
          Height = 21
          HelpContext = 697
          TabOrder = 0
          Text = '0'
          OnChange = SEXRadiusChange
        end
        object CBAutoXR: TCheckBox
          Left = 128
          Top = 16
          Width = 79
          Height = 21
          HelpContext = 697
          Caption = '&Auto'
          Checked = True
          State = cbChecked
          TabOrder = 1
          OnClick = CBAutoXRClick
        end
        object Edit3: TEdit
          Left = 72
          Top = 43
          Width = 33
          Height = 21
          HelpContext = 703
          TabOrder = 2
          Text = '0'
          OnChange = SEYRadiusChange
        end
        object CBAutoYR: TCheckBox
          Left = 128
          Top = 46
          Width = 79
          Height = 19
          HelpContext = 703
          Caption = 'A&uto'
          Checked = True
          State = cbChecked
          TabOrder = 3
          OnClick = CBAutoYRClick
        end
        object UDY: TUpDown
          Left = 105
          Top = 43
          Width = 15
          Height = 21
          HelpContext = 703
          Associate = Edit3
          Max = 2000
          Increment = 5
          TabOrder = 4
        end
        object UDX: TUpDown
          Left = 105
          Top = 15
          Width = 15
          Height = 21
          HelpContext = 697
          Associate = Edit2
          Max = 2000
          Increment = 5
          TabOrder = 5
        end
      end
    end
    object TabShadow: TTabSheet
      Caption = 'Shadow'
      ImageIndex = 2
    end
    object TabEmboss: TTabSheet
      Caption = 'Emboss'
      ImageIndex = 3
    end
  end
end

object FiltersEditor: TFiltersEditor
  Left = 311
  Top = 231
  AutoScroll = False
  Caption = 'Filters'
  ClientHeight = 389
  ClientWidth = 476
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 126
    Top = 0
    Height = 348
  end
  object PageControl1: TPageControl
    Left = 129
    Top = 0
    Width = 347
    Height = 348
    ActivePage = TabSheet1
    Align = alClient
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'Preview'
      object Image: TDraw3D
        Left = 0
        Top = 0
        Width = 339
        Height = 320
        BackImage.Mode = pbmCustom
        BackImageMode = pbmCustom
        Align = alClient
        BevelOuter = bvNone
        PopupMenu = PopupMenu1
        TabOrder = 0
        OnResize = ImageResize
      end
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 126
    Height = 348
    Align = alLeft
    BevelOuter = bvNone
    TabOrder = 1
    object Splitter2: TSplitter
      Left = 0
      Top = 181
      Width = 126
      Height = 3
      Cursor = crVSplit
      Align = alBottom
    end
    object Panel2: TPanel
      Left = 0
      Top = 0
      Width = 126
      Height = 37
      Align = alTop
      TabOrder = 0
      object BAdd: TSpeedButton
        Left = 4
        Top = 8
        Width = 23
        Height = 22
        Caption = '+'
        Flat = True
        OnClick = BAddClick
      end
      object BDelete: TSpeedButton
        Left = 34
        Top = 8
        Width = 23
        Height = 22
        Caption = '-'
        Enabled = False
        Flat = True
        OnClick = BDeleteClick
      end
      object BMoveUp: TSpeedButton
        Left = 69
        Top = 8
        Width = 23
        Height = 22
        Enabled = False
        Flat = True
        NumGlyphs = 2
        OnClick = BMoveUpClick
      end
      object BMoveDown: TSpeedButton
        Left = 96
        Top = 8
        Width = 23
        Height = 22
        Enabled = False
        Flat = True
        NumGlyphs = 2
        OnClick = BMoveDownClick
      end
    end
    object Filters: TCheckListBox
      Left = 0
      Top = 37
      Width = 126
      Height = 144
      OnClickCheck = FiltersClickCheck
      Align = alClient
      ItemHeight = 13
      TabOrder = 1
      OnClick = FiltersClick
    end
    object PageProps: TPageControl
      Left = 0
      Top = 184
      Width = 126
      Height = 164
      ActivePage = Properties
      Align = alBottom
      TabOrder = 2
      object Properties: TTabSheet
        Caption = 'Options'
      end
      object TabRegion: TTabSheet
        Caption = 'Region'
        ImageIndex = 1
        object Label1: TLabel
          Left = 24
          Top = 6
          Width = 21
          Height = 13
          Alignment = taRightJustify
          BiDiMode = bdLeftToRight
          Caption = '&Left:'
          FocusControl = ELeft
          ParentBiDiMode = False
        end
        object Label2: TLabel
          Left = 23
          Top = 30
          Width = 22
          Height = 13
          Alignment = taRightJustify
          BiDiMode = bdLeftToRight
          Caption = '&Top:'
          FocusControl = ETop
          ParentBiDiMode = False
        end
        object Label3: TLabel
          Left = 14
          Top = 54
          Width = 31
          Height = 13
          Alignment = taRightJustify
          BiDiMode = bdLeftToRight
          Caption = '&Width:'
          FocusControl = EWidth
          ParentBiDiMode = False
        end
        object Label4: TLabel
          Left = 11
          Top = 78
          Width = 34
          Height = 13
          Alignment = taRightJustify
          BiDiMode = bdLeftToRight
          Caption = '&Height:'
          FocusControl = EHeight
          ParentBiDiMode = False
        end
        object ELeft: TEdit
          Left = 48
          Top = 3
          Width = 38
          Height = 21
          TabOrder = 0
          Text = '0'
          OnChange = ELeftChange
        end
        object UDLeft: TUpDown
          Left = 86
          Top = 3
          Width = 15
          Height = 21
          Associate = ELeft
          Max = 11100
          TabOrder = 1
        end
        object ETop: TEdit
          Left = 48
          Top = 27
          Width = 38
          Height = 21
          TabOrder = 2
          Text = '0'
          OnChange = ETopChange
        end
        object UDTop: TUpDown
          Left = 86
          Top = 27
          Width = 15
          Height = 21
          Associate = ETop
          Max = 11100
          TabOrder = 3
        end
        object EWidth: TEdit
          Left = 48
          Top = 51
          Width = 38
          Height = 21
          TabOrder = 4
          Text = '0'
          OnChange = EWidthChange
        end
        object UDWidth: TUpDown
          Left = 86
          Top = 51
          Width = 15
          Height = 21
          Associate = EWidth
          Max = 11100
          TabOrder = 5
        end
        object EHeight: TEdit
          Left = 48
          Top = 75
          Width = 38
          Height = 21
          TabOrder = 6
          Text = '0'
          OnChange = EHeightChange
        end
        object UDHeight: TUpDown
          Left = 86
          Top = 75
          Width = 15
          Height = 21
          Associate = EHeight
          Max = 11100
          TabOrder = 7
        end
      end
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 348
    Width = 476
    Height = 41
    Align = alBottom
    TabOrder = 2
    object Panel4: TPanel
      Left = 384
      Top = 1
      Width = 91
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
    end
    object CBPreview: TCheckBox
      Left = 16
      Top = 16
      Width = 97
      Height = 17
      Caption = '&Preview'
      Checked = True
      State = cbChecked
      TabOrder = 1
      OnClick = CBPreviewClick
    end
    object CBScaled: TCheckBox
      Left = 120
      Top = 16
      Width = 97
      Height = 17
      Caption = '&Scaled'
      Checked = True
      State = cbChecked
      TabOrder = 2
      OnClick = CBScaledClick
    end
  end
  object MenuFilters: TPopupMenu
    Left = 56
    Top = 104
  end
  object PopupMenu1: TPopupMenu
    Left = 200
    Top = 168
    object Scaled1: TMenuItem
      Caption = '&Scaled'
      Checked = True
      OnClick = Scaled1Click
    end
  end
  object Timer1: TTimer
    Interval = 1
    OnTimer = Timer1Timer
    Left = 52
    Top = 48
  end
end

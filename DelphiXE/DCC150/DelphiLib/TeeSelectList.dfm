object SelectListForm: TSelectListForm
  Left = 275
  Top = 183
  ActiveControl = FromList
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  ClientHeight = 146
  ClientWidth = 326
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 133
    Top = 18
    Height = 128
  end
  object FromList: TListBox
    Left = 0
    Top = 18
    Width = 133
    Height = 128
    Align = alLeft
    ItemHeight = 13
    MultiSelect = True
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    OnClick = ToListClick
    OnDblClick = FromListDblClick
  end
  object ToList: TListBox
    Left = 167
    Top = 18
    Width = 126
    Height = 128
    Align = alClient
    ItemHeight = 13
    MultiSelect = True
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = ToListClick
    OnDblClick = ToListDblClick
  end
  object Panel1: TPanel
    Left = 293
    Top = 18
    Width = 33
    Height = 128
    Align = alRight
    BevelOuter = bvNone
    TabOrder = 2
    object BMoveUP: TSpeedButton
      Left = 4
      Top = 1
      Width = 27
      Height = 25
      NumGlyphs = 2
      OnClick = BMoveUPClick
    end
    object BMoveDown: TSpeedButton
      Left = 4
      Top = 32
      Width = 27
      Height = 25
      NumGlyphs = 2
      OnClick = BMoveUPClick
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 326
    Height = 18
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 3
    object L22: TLabel
      Left = 3
      Top = 2
      Width = 131
      Height = 16
      AutoSize = False
      Caption = 'A&vailable:'
      FocusControl = FromList
    end
    object L24: TLabel
      Left = 165
      Top = 2
      Width = 133
      Height = 16
      AutoSize = False
      Caption = '&Selected: '
      FocusControl = ToList
    end
  end
  object Panel3: TPanel
    Left = 136
    Top = 18
    Width = 31
    Height = 128
    Align = alLeft
    BevelOuter = bvNone
    TabOrder = 4
    object BRightOne: TButton
      Left = 1
      Top = 3
      Width = 25
      Height = 21
      Caption = '>'
      TabOrder = 0
      OnClick = BRightOneClick
    end
    object BRightAll: TButton
      Left = 1
      Top = 27
      Width = 25
      Height = 21
      Caption = '>>'
      TabOrder = 1
      OnClick = BRightAllClick
    end
    object BLeftOne: TButton
      Left = 1
      Top = 55
      Width = 25
      Height = 21
      Caption = '<'
      TabOrder = 2
      OnClick = BLeftOneClick
    end
    object BLeftAll: TButton
      Left = 1
      Top = 79
      Width = 25
      Height = 21
      Caption = '<<'
      TabOrder = 3
      OnClick = BLeftAllClick
    end
  end
end

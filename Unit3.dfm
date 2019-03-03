object Form3: TForm3
  Left = 0
  Top = 0
  BorderIcons = []
  Caption = 'Search'
  ClientHeight = 111
  ClientWidth = 319
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 319
    Height = 111
    Align = alClient
    TabOrder = 0
    object findEdit: TEdit
      Left = 8
      Top = 16
      Width = 185
      Height = 21
      TabOrder = 0
      OnChange = findEditChange
    end
    object btnFind: TButton
      Left = 199
      Top = 14
      Width = 114
      Height = 25
      Caption = 'Find'
      TabOrder = 1
      OnClick = btnFindClick
    end
    object RadioGroup1: TRadioGroup
      Left = 8
      Top = 45
      Width = 305
      Height = 60
      Caption = 'Select Field'
      ItemIndex = 1
      Items.Strings = (
        'Product ID'
        'Name')
      TabOrder = 2
    end
  end
end

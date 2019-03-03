object Form2: TForm2
  Left = 0
  Top = 0
  BorderIcons = []
  Caption = 'Add Record'
  ClientHeight = 78
  ClientWidth = 457
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
    Width = 457
    Height = 78
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 447
    object Label1: TLabel
      Left = 8
      Top = 43
      Width = 106
      Height = 21
      AutoSize = False
      Caption = 'Size'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 8
      Top = 16
      Width = 106
      Height = 21
      AutoSize = False
      Caption = 'Name'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Edit2: TEdit
      Left = 64
      Top = 16
      Width = 145
      Height = 21
      TabOrder = 0
      Text = '.'
    end
    object Edit3: TEdit
      Left = 64
      Top = 43
      Width = 145
      Height = 21
      TabOrder = 1
      Text = '.'
    end
    object Button1: TButton
      Left = 231
      Top = 13
      Width = 146
      Height = 51
      Caption = 'Submit'
      TabOrder = 2
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 383
      Top = 13
      Width = 66
      Height = 51
      Caption = 'Cancel'
      TabOrder = 3
      OnClick = Button2Click
    end
  end
end

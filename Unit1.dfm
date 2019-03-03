object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'DIVANI'
  ClientHeight = 509
  ClientWidth = 755
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 288
    Top = 408
    Width = 23
    Height = 22
  end
  object SpeedButton2: TSpeedButton
    Left = 296
    Top = 416
    Width = 23
    Height = 22
  end
  object panelGrid: TPanel
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 525
    Height = 503
    Align = alClient
    Caption = 'panelGrif'
    TabOrder = 0
    object gridMain: TDBGrid
      Left = 1
      Top = 1
      Width = 523
      Height = 501
      Margins.Left = 10
      Margins.Top = 10
      Margins.Right = 10
      Margins.Bottom = 10
      Align = alClient
      BiDiMode = bdLeftToRight
      DataSource = dbDataSource
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentBiDiMode = False
      ParentFont = False
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -13
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      OnDblClick = gridMainDblClick
      Columns = <
        item
          Expanded = False
          FieldName = 'Product_ID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Name'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Size'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Date'
          Visible = True
        end>
    end
  end
  object panelControl: TPanel
    AlignWithMargins = True
    Left = 534
    Top = 3
    Width = 218
    Height = 503
    Align = alRight
    TabOrder = 1
    Visible = False
    object Label1: TLabel
      AlignWithMargins = True
      Left = 4
      Top = 6
      Width = 210
      Height = 43
      Margins.Top = 5
      Align = alTop
      Alignment = taCenter
      AutoSize = False
      Caption = 'Divani'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -40
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      ExplicitWidth = 235
    end
    object buttonAddRecord: TButton
      AlignWithMargins = True
      Left = 12
      Top = 77
      Width = 94
      Height = 60
      Hint = 'Add Button'
      Margins.Left = 9
      Margins.Top = 9
      Margins.Right = 9
      Margins.Bottom = 9
      Caption = 'Add Record'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 0
      OnClick = buttonAddRecordClick
    end
    object btnDelete: TButton
      AlignWithMargins = True
      Left = 116
      Top = 77
      Width = 93
      Height = 60
      Margins.Left = 9
      Margins.Top = 9
      Margins.Right = 9
      Margins.Bottom = 9
      Caption = 'Delete Record'
      TabOrder = 1
      OnClick = btnDeleteClick
    end
    object buttonRefresh: TButton
      AlignWithMargins = True
      Left = 11
      Top = 349
      Width = 196
      Height = 67
      Margins.Left = 10
      Margins.Top = 5
      Margins.Right = 10
      Margins.Bottom = 5
      Align = alBottom
      Caption = 'Refresh'
      TabOrder = 2
      OnClick = buttonRefreshClick
    end
    object Button2: TButton
      AlignWithMargins = True
      Left = 11
      Top = 431
      Width = 196
      Height = 61
      Margins.Left = 10
      Margins.Top = 10
      Margins.Right = 10
      Margins.Bottom = 10
      Align = alBottom
      Caption = 'Exit'
      TabOrder = 3
      OnClick = Button2Click
    end
    object buttonSearch: TButton
      AlignWithMargins = True
      Left = 12
      Top = 155
      Width = 197
      Height = 42
      Margins.Left = 9
      Margins.Top = 9
      Margins.Right = 9
      Margins.Bottom = 9
      Caption = 'Search'
      TabOrder = 4
      OnClick = buttonSearchClick
    end
    object Button1: TButton
      AlignWithMargins = True
      Left = 11
      Top = 304
      Width = 196
      Height = 35
      Margins.Left = 10
      Margins.Top = 5
      Margins.Right = 10
      Margins.Bottom = 5
      Align = alBottom
      Caption = 'Export as Excel'
      TabOrder = 5
      OnClick = Button1Click
    end
  end
  object dbDataSource: TDataSource
    DataSet = dbQuery
    Left = 280
    Top = 448
  end
  object MainMenu1: TMainMenu
    Left = 387
    Top = 395
    object N1: TMenuItem
      Caption = 'Table'
      object Edit1: TMenuItem
        Caption = 'Add'
        OnClick = Edit1Click
      end
      object Search1: TMenuItem
        Caption = 'Search'
        OnClick = Search1Click
      end
      object Delete1: TMenuItem
        Caption = 'Delete'
        OnClick = Delete1Click
      end
      object Refresh2: TMenuItem
        Caption = ' Refresh Table'
        OnClick = Refresh2Click
      end
    end
    object Application1: TMenuItem
      Caption = 'Application'
      object ShowControlPanel1: TMenuItem
        Caption = 'Show Control Panel'
        OnClick = ShowControlPanel1Click
      end
      object Exit1: TMenuItem
        Caption = 'Exit'
        OnClick = Exit1Click
      end
    end
  end
  object dbConnection: TFDConnection
    Params.Strings = (
      'Database=hdorderc'
      'User_Name=hdorderc'
      'Password=6s95mYR7da'
      'Server=lamp107.cloudaccess.net'
      'MonitorBy=Remote'
      'DriverID=MySQL')
    UpdateOptions.AssignedValues = [uvUpdateMode]
    UpdateOptions.UpdateMode = upWhereChanged
    Connected = True
    Left = 283
    Top = 336
  end
  object dbQuery: TFDQuery
    Active = True
    Connection = dbConnection
    SQL.Strings = (
      'select * from Products')
    Left = 283
    Top = 392
  end
  object FDMoniRemoteClientLink1: TFDMoniRemoteClientLink
    Host = 'lamp107.cloudaccess.net'
    Left = 387
    Top = 336
  end
end

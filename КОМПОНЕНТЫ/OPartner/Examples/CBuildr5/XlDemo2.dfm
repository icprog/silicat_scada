�
 TDATAMODULE1 0�	  TPF0TDataModule1DataModule1OldCreateOrder	LeftTop� Height�Width� TTabletblCustomersActive	DatabaseNameBCDEMOS	FieldDefsNameCustNoDataTypeftFloat NameCompanyDataTypeftStringSize NameAddr1DataTypeftStringSize NameAddr2DataTypeftStringSize NameCityDataTypeftStringSize NameStateDataTypeftStringSize NameZipDataTypeftStringSize
 NameCountryDataTypeftStringSize NamePhoneDataTypeftStringSize NameFAXDataTypeftStringSize NameTaxRateDataTypeftFloat NameContactDataTypeftStringSize NameLastInvoiceDateDataType
ftDateTime  	StoreDefs		TableNamecustomer.dbLeft� Top8  TQueryqryChartDataDatabaseNameDBDEMOSSQL.Strings<select max(company) as company, sum(itemstotal) as itemtot, "          sum(amountpaid) as totalfrom customer, orders 6where customer.custno = orders.custno group by company  Left@Top8  TDataSourcedsCustomersDataSettblCustomersLeft� Toph  TTable	tblOrdersActive	DatabaseNameBCDEMOS	FieldDefsNameOrderNoDataTypeftFloat NameCustNo
Attributes
faRequired DataTypeftFloat NameSaleDateDataType
ftDateTime NameShipDateDataType
ftDateTime NameEmpNo
Attributes
faRequired DataType	ftInteger NameShipToContactDataTypeftStringSize NameShipToAddr1DataTypeftStringSize NameShipToAddr2DataTypeftStringSize Name
ShipToCityDataTypeftStringSize NameShipToStateDataTypeftStringSize Name	ShipToZipDataTypeftStringSize
 NameShipToCountryDataTypeftStringSize NameShipToPhoneDataTypeftStringSize NameShipVIADataTypeftStringSize NamePODataTypeftStringSize NameTermsDataTypeftStringSize NamePaymentMethodDataTypeftStringSize Name
ItemsTotalDataType
ftCurrency NameTaxRateDataTypeftFloat NameFreightDataType
ftCurrency Name
AmountPaidDataType
ftCurrency  	IndexDefsFieldsOrderNoOptions	ixPrimaryixUnique  NameCustNoFieldsCustNo  	IndexNameCustNoMasterFieldsCustNoMasterSourcedsCustomers	StoreDefs		TableName	orders.dbLeft� Top8  TDataSourcedsOrdersDataSet	tblOrdersLeft� Toph  TOpDataSetModelmdlCustomersVersion1.60DatasettblCustomersWantFullMemosLeft� Top  TOpDataSetModel	mdlOrdersVersion1.60Dataset	tblOrdersWantFullMemosLeft� Top  TOpDataSetModelmdlChartDataVersion1.60DatasetqryChartDataWantFullMemosLeft@Top   
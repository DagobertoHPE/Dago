Action()
{
	web_add_auto_header("Authorization","Bearer OAktR6HqsAS5vPjbGO728SlA6C3A");

lr_start_transaction("02_TripSummary");

	web_custom_request("tripSummary",
			"URL=http://stage-pvt-apigateway.delta.com/v1/contents/baseline/brands/products?pageId=trip-summary", 
			"Method=POST", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=http://stage-pvt-apigateway.delta.com/v1/contents/baseline/brands/products", 
			"Snapshot=t5.inf", 
			"Mode=HTTP",
			"Body={  \"brandAndProducts\": 	[{\"brand\": {\"id\": \"dpps\"},\"products\": {\"id\":\"amenity.AM0CL2\"}] }}",
			LAST);
	
	lr_end_transaction("02_TripSummary", LR_AUTO);
	return 0;
}

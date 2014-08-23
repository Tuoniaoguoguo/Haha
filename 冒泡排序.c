for(i=0;i<DUTYCYCLE_ARRAY_MAX_I;i++) //Bubble Sort
{
	for(j=0;j<DUTYCYCLE_ARRAY_MAX_I-i;j++)
	{
		if(obj->DutyCycle_Array[j+1]<obj->DutyCycle_Array[j])
		{
			tmp=obj->DutyCycle_Array[j+1];
			obj->DutyCycle_Array[j+1]=obj->DutyCycle_Array[j];
			obj->DutyCycle_Array[j]=tmp;
		}
	}
}

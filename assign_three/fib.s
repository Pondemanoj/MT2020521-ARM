
     AREA     fibanocci, CODE, READONLY
     EXPORT __main
     IMPORT printMsg

     ENTRY 
__main  FUNCTION
		MOV  R7, #10 
		MOV  R8, #1 
		MOV  R9, #1 
		SUB  R7, #1	
loopforfib	CMP R7, #0	
		BLE stop	
		
		ADD R8, R9	
		MOV r0, R8
		BL printMsg
		EOR R8, R9	
		EOR R9, R8
		EOR R8, R9
		SUB R7, #1	
		B loopforfib
stop    B stop 
	 ENDFUNC
	 END

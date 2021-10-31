     AREA     largestOfThree, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R0, #0x20000000
		ADD R1,R0,#0x00000004
		ADD R2,R0,#0x00000008
		MOV R3, #0x323
		MOV R4, #0x123
		MOV R5, #0x97
		STR R3,[R0]
		STR R4,[R1]   
		STR R5,[R2]
		LDR R6,[R0]
		LDR R7,[R1]
		LDR R8,[R2]
		MOV R9,R6    
		CMP R9,R7
		BGT label
		MOV R9,R7 
label		CMP R9,R8
		BGT greater
		MOV R9,R8
greater		MOV R0, R9
  	    BL printMsg
stop    B stop 
	 ENDFUNC
	 END 

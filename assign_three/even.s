     AREA     evenodd, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R0,#0x20000000
		ADD R1,R0,#0x00000005
		ADD R2,R0,#0x0000000A
		ADD R3,R0,#0x0000000F
		MOV R4,#56
		MOV R5,#65
		MOV R6,#78
		MOV R7,#90
		STR R4,[R0]
		STR R5,[R1]   
		STR R6,[R2]
		STR R7,[R3]
		LDR R8,[R0]
		LDR R9,[R1]
		LDR R10,[R2]
		LDR R11,[R3]
		MOV R0,#0x00000000
		MOV R1,#0x00000001
		MOV R2,#0x00000000
		AND R12,R8,R1
		CMP R12,R2
		BEQ branch1
label1		AND R12,R9,R1
		CMP R12,R2
		BEQ branch2
label2		AND R12,R10,R1
		CMP R12,R2
		BEQ branch3
label3		AND R12,R11,R1
		CMP R12,R2
		BEQ branch4
		BL printMsg
		B stop
branch1		ADD R0,R0,R1
		B label1
branch2		ADD R0,R0,R1
		B label2
branch3		ADD R0,R0,R1
		B label3
branch4		ADD R0,R0,R1
	   	BL printMsg 
stop    B stop 
	 ENDFUNC
	 END 
		


#ifndef VAR1
void FUN1(CWE123_Write_What_Where_Condition__listen_socket_67_structType VAR2)
{
 badStruct VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR5 = VAR3.VAR6.VAR7;
 VAR8 = VAR3.VAR6.VAR9;
 VAR5->VAR9 = VAR8;
 VAR8->VAR7 = VAR5;
}
#endif

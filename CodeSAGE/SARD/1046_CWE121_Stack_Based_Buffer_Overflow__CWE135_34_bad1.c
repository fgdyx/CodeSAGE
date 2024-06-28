#ifndef VAR1
void FUN1()
{
 void * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE135_34_unionType VAR3;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR2 = (void *)VAR4;
 VAR3.VAR5 = VAR2;
 {
 void * VAR2 = VAR3.VAR6;
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR7 = strlen((char *)VAR2);
 void * VAR8 = (void *)calloc(VAR7+1, 1);
 memcpy(VAR8, VAR2, (VAR7+1));
 FUN2((char *)VAR8);
 free(VAR8);
 }
 }
}
#endif

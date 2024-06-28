#ifndef VAR1
void FUN1()
{
 void * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR2 = (void *)VAR3;
 {
 void * VAR4 = VAR2;
 void * VAR2 = VAR4;
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR5 = strlen((char *)VAR2);
 void * VAR6 = (void *)calloc(VAR5+1, 1);
 memcpy(VAR6, VAR2, (VAR5+1));
 FUN2((char *)VAR6);
 free(VAR6);
 }
 }
}
#endif

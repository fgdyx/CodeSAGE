#ifndef VAR1
void FUN1(CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN2(VAR3);
}
#endif

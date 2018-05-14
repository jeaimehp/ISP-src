program kind
implicit none

integer         :: i   ! Default 4 bytes
integer(kind=4) :: j   ! Explicitly 4 bytes
integer(8)      :: k   ! Explicitly 8 bytes

integer, parameter :: lng=selected_int_kind(16) ! selected_int_kind(n) returns the kind
                                                ! value needed to
                                                ! specify precision to
                                                ! n decimal places

integer(kind=lng)  :: l

i = 5; j = 6; k = 7_8; l = 2_lng

print *, huge(i), huge(k) ! huge() is a build-in function and
                                         ! returns the largest value of
                                         ! the argument type
end program

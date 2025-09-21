1. Creational Patterns (Nhóm khởi tạo)
    Giúp kiểm soát quá trình tạo đối tượng.
    (1) Singleton: Đảm bảo một lớp chỉ có duy nhất một instance.
    (2) Factory Method: Định nghĩa interface để tạo đối tượng, cho phép lớp con quyết định lớp nào sẽ được khởi tạo.
    (3) Abstract Factory: Tạo ra các họ (family) đối tượng liên quan.
    (4) Builder: Tách rời việc khởi tạo đối tượng phức tạp khỏi cấu trúc của nó.
    Prototype: Tạo đối tượng mới bằng cách sao chép một đối tượng có sẵn (clone).

2. Structural Patterns (Nhóm cấu trúc)
    Giúp tổ chức các lớp và đối tượng thành cấu trúc lớn hơn.=
    Adapter: Chuyển đổi interface của một lớp thành interface khác mà client mong muốn.
    Bridge: Tách phần trừu tượng ra khỏi phần triển khai để chúng có thể thay đổi độc lập.
    Composite: Ghép nhiều đối tượng thành cấu trúc cây để xử lý như một đối tượng duy nhất.
    Decorator: Thêm chức năng cho đối tượng một cách linh hoạt mà không thay đổi cấu trúc lớp.
    Facade: Cung cấp interface đơn giản cho một hệ thống con phức tạp.
    Flyweight: Tiết kiệm bộ nhớ bằng cách chia sẻ các đối tượng giống nhau.
    Proxy: Đại diện cho đối tượng khác để kiểm soát truy cập.

3. Behavioral Patterns (Nhóm hành vi)
    Giúp định nghĩa cách các đối tượng giao tiếp, cộng tác với nhau.
    Observer: Một đối tượng thay đổi, các đối tượng phụ thuộc sẽ được thông báo.
    Strategy: Định nghĩa họ các thuật toán, đóng gói từng thuật toán và làm cho chúng hoán đổi cho nhau.
    Command: Đóng gói yêu cầu thành đối tượng, cho phép tham số hóa các client với các yêu cầu khác nhau.
    Chain of Responsibility: Truyền request qua một chuỗi các handler đến khi có handler xử lý được.
    State: Cho phép đối tượng thay đổi hành vi khi trạng thái nội bộ thay đổi.
    Template Method: Định nghĩa khung của thuật toán, để các bước cụ thể cho lớp con cài đặt.
    Mediator: Định nghĩa đối tượng trung gian để giảm sự phụ thuộc giữa các đối tượng.
    Iterator: Duyệt qua các phần tử của một tập hợp mà không để lộ cấu trúc bên trong.
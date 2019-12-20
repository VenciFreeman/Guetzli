#include <string>
#include <vector>

#include "comparator.h"
#include "jpeg_data.h"
#include "stats.h"
#include "processor.h"

int main() {

    bool Process(const guetzli::Params &params, guetzli::ProcessStats *stats,
                 const std::string &in_data,
                 std::string *out_data);

    struct GuetzliOutput {
        std::string jpeg_data;
        double score;
    };

    bool ProcessJpegData(const guetzli::Params &params, const guetzli::JPEGData &jpg_in,
                         guetzli::Comparator *comparator, GuetzliOutput *out,
                         guetzli::ProcessStats *stats);

// Sets *out to a jpeg encoded string that will decode to an image that is
// visually indistinguishable from the input rgb image.
    bool Process(const guetzli::Params &params, guetzli::ProcessStats *stats,
                 const std::vector<uint8_t> &rgb, int w, int h,
                 std::string *out);
    return 0;
}